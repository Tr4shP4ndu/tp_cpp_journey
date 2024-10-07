#include <iostream>

namespace first{
  int x = 1;
}

namespace second{
  int x = 2;
}

using std::cout;
using std::string;

int main(){
    
    // using namespace first;

    /* Namespace = provides a solution for preventing name conflicts
                  in a large projects. Each entity needs a unique name.
                  A namespace allows for identically named entities
                  as long as thje namespaces are different.
    */
    int x = 0;

    string name = "Bro!";
    cout << "Hello " << name << '\n';
    cout << "This is Value X without namespace: " << x << '\n'; // output is 0 since it's not taking the namespace
    cout << "This is Value X with namespace first: " << first::x << '\n'; // output is 1 since we made it sure to collect the namescape first
    cout << "This is Value X with namespace second: " << second::x << '\n'; // output is 2 since we made it sure to collect the namescape second

    return 0;
}
