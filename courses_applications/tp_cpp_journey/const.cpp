#include <iostream>

int main(){
  /*The const keyword specifies that a variable's value is constant
    tells the compiler to prvent anything frtom modifying it
    (read-only)
    It's normal for any constant to keep them in CAPS
  */

 const double PI = 3.14159;
 double radius = 10;
 double circumference = 2 * PI * radius;

 std:: cout << circumference << "cm";

 return 0;
}
