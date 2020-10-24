#include<iostream>
int main(){
float *ptr { 0 };  // ptr is now a null pointer

std::cout<<ptr;          //for some reason it returns no error, but printing *ptr gives error.

//float *ptr2; // ptr2 is uninitialized
//ptr2 = 0; // ptr2 is now a null pointer
return 0;
}
/*
#include <cstddef> // for NULL
 
double *ptr { NULL }; // ptr is a null pointer
*/

/*
#include <iostream>
 
void print(int x)
{
	std::cout << "print(int): " << x << '\n';
}
 
void print(int *x)
{
	if (!x)
		std::cout << "print(int*): null\n";
	else
		std::cout << "print(int*): " << *x << '\n';
}
 
int main()
{
	int *x { nullptr };
	print(x); // calls print(int*)
 
	print(nullptr); // calls print(int*) as desired
    print(NULL);    //This would have called the first print.
	return 0;
}
*/