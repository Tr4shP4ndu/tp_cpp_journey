.PHONY: all clean run

# Define project variables
PROJECT_NAME        ?= learning
COMPILER_PATH       ?= C:/raylib/w64devkit/bin
PLATFORM            ?= PLATFORM_DESKTOP
BUILD_MODE          ?= RELEASE

# Cross-platform detection
ifeq ($(OS),Windows_NT)
    PLATFORM_OS = WINDOWS
    export PATH := $(COMPILER_PATH):$(PATH)
else
    UNAMEOS = $(shell uname)
    ifeq ($(UNAMEOS),Linux)
        PLATFORM_OS = LINUX
    else ifeq ($(UNAMEOS),Darwin)
        PLATFORM_OS = OSX
    endif
endif

# Compiler setup
CC = g++
ifeq ($(PLATFORM_OS),OSX)
    CC = clang++
endif

# Build mode flags
CFLAGS += -Wall -std=c++14 -D_DEFAULT_SOURCE -Wno-missing-braces
ifeq ($(BUILD_MODE),DEBUG)
    CFLAGS += -g -O0
else
    CFLAGS += -s -O1
endif

# Source and Object files
SRC_DIR = src
OBJ_DIR = obj
SRC = $(wildcard $(SRC_DIR)/*.cpp)  # Changed to .cpp for C++
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRC)

# Default target
all: $(PROJECT_NAME)

# Link the final executable
$(PROJECT_NAME): $(OBJS)
	$(CC) -o $@ $(OBJS) $(CFLAGS)

# Compile source files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) -c $< -o $@ $(CFLAGS)

# Run the program and clean up afterward
run: all
	@./$(PROJECT_NAME)
	@$(MAKE) clean

# Clean up
clean:
	rm -rf $(OBJ_DIR)/*.o $(PROJECT_NAME)*
	@echo Cleaning done
