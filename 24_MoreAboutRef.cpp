#include <iostream>
#include <cmath>    // for std::sin() and std::cos()
 
void getSinCos(double degrees, double &sinOut, double &cosOut)
{
    // sin() and cos() take radians, not degrees, so we need to convert
    static constexpr double pi { 3.14159265358979323846 }; // the value of pi
    double radians = degrees * pi / 180.0;
    sinOut = std::sin(radians);
    cosOut = std::cos(radians);
}
 
int main()
{
    double sin(0.0);
    double cos(0.0);
 
    // getSinCos will return the sin and cos in variables sin and cos
    getSinCos(30.0, sin, cos);
 
    std::cout << "The sin is " << sin << '\n';
    std::cout << "The cos is " << cos << '\n';
    return 0;
}


void foo(const std::string &x) // x is a const reference
{
    x = "hello";  // compile error: a const reference cannot have its value changed!
}


#include <string>
 
void foo(std::string& text) {}
 
int main()
{
  std::string text{ "hello" };
  
  foo(text); // ok
  foo(text + " world"); // illegal, non-const references can't bind to r-values.
 
  return 0;
}
