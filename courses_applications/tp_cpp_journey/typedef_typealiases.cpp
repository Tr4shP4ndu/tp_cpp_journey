#include <iostream>
#include <vector>

///typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int number_t;

int main(){
  /*
    TypeDef - Reserved keyword used to create an additional name 
    (alias) for another datatype.
    New identifier for an existing type
    Helps with readability and recudes typos
    Use whent here is a clear benefit
    Replaced with 'using' )work better w/ templates
  */
    //pairlist_t pairlist;
    text_t firstName = "Tr4shP4ndu";
    number_t age =21;
    std::cout << firstName << '\n';
    std::cout << age << '\n';
    return 0;
}
