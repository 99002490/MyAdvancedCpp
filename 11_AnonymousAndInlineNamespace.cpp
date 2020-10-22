#include <iostream>
 
namespace // unnamed namespace
{
    void doSomething() // can only be accessed in this file
    {
        std::cout << "v1\n";
    }
}
 
int main()
{
    doSomething(); // we can call doSomething() without a namespace prefix
 
    return 0;
}
/*
#include <iostream>
 
inline namespace v1 // declare an inline namespace named v1
{
    void doSomething()
    {
        std::cout << "v1\n";
    }
}
 
namespace v2 // declare a normal namespace named v2
{
    void doSomething()
    {
        std::cout << "v2\n";
    }
}
 
int main()
{
    v1::doSomething(); // calls the v1 version of doSomething()
    v2::doSomething(); // calls the v2 version of doSomething()
 
    doSomething(); // calls the inline version of doSomething() (which is v1)
 
    return 0;
}
*/