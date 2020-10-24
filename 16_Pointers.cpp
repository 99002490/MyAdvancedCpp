int *iPtr{}; // a pointer to an integer value     //recommended
double *dPtr{}; // a pointer to a double value    //recommended
 
int* iPtr2{}; // also valid syntax (acceptable, but not favored)
int * iPtr3{}; // also valid syntax (but don't do this, it looks like multiplication)
 
int *iPtr4{}, *iPtr5{}; // declare two pointers to integer variables (not recommended)

int* doSomething();  //recommended

int v{ 5 };
int *ptr{ &v }; // initialize ptr with address of variable v

int iValue{ 5 };
double dValue{ 7.0 };
 
int *iPtr{ &iValue }; // ok
double *dPtr{ &dValue }; // ok
//iPtr = &dValue; // wrong -- int pointer cannot point to the address of a double variable
//dPtr = &iValue; // wrong -- double pointer cannot point to the address of an int variable

int value{ 5 };
//&value; // prints address of value
//value; // prints contents of value
 
int *ptr{ &value }; // ptr points to value
//ptr; // prints address held in ptr, which is &value
//*ptr; // dereference ptr (get the value that ptr is pointing to)

int value1{ 5 };
int value2{ 7 };

/* 
int *ptr{};
 
ptr = &value1; // ptr points to value1
std::cout << *ptr; // prints 5
 
ptr = &value2; // ptr now points to value2
std::cout << *ptr; // prints 7

int value{ 5 };
int *ptr{ &value }; // ptr points to value
 
*ptr = 7; // *ptr is the same as value, which is assigned 7
std::cout << value << '\n'; // prints 7
*/