#include <iostream>
 
namespace foo // define a namespace named foo
{
    // This doSomething() belongs to namespace foo
    int doSomething(int x, int y)
    {
        return x + y;
    }
}
 
namespace goo // define a namespace named goo
{
    // This doSomething() belongs to namespace goo
    int doSomething(int x, int y)
    {
        return x - y;
    }
}
 
int main()
{
    std::cout << foo::doSomething(4, 3) << '\n'; // use the doSomething() that exists in namespace foo
    return 0;
}
/*
#include <iostream>
 
void print() // this print lives in the global namespace
{
	std::cout << " there\n";
}
 
namespace foo
{
	void print() // this print lives in the foo namespace
	{
		std::cout << "Hello";
	}
}
 
int main()
{
	foo::print(); // call foo::print()
	::print(); // call print() in global namespace (same as just calling print() in this case)
 
	return 0;
}
*/