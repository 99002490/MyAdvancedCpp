std::vector<int> array; 
std::vector<int> array2 = { 9, 7, 5, 3, 1 }; // use initializer list to initialize array (Before C++11)
std::vector<int> array3 { 9, 7, 5, 3, 1 };

#include <iostream>
#include <vector>
 
int main()
{
    std::vector array { 0, 1, 2 };
    array.resize(5); // set size to 5
 
    std::cout << "The length is: " << array.size() << '\n';
 
    for (int i : array)
        std::cout << i << ' ';
 
    std::cout << '\n';
 
    return 0;
}
This prints:

The length is: 5
0 1 2 0 0
