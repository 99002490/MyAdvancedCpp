#include<array>
#include<iostream>
#include<algorithm> // for std::sort
int main(){


//std::array<int, 3> myArray; // declare an integer array with length 3

std::array<int, 5> myArray = { 9, 7, 5, 3, 1 }; // initializer list
std::cout<<myArray.at(0)<<" is the ele at index 0\n";
//myArray.at(1)=5;                              //reassign can be done.
std::cout<<myArray.size()<<" is the size of the array\n";
std::sort(myArray.begin(), myArray.end()); // sort the array forwards
//  std::sort(myArray.rbegin(), myArray.rend()); // sort the array backwards
for(const auto &ele:myArray){
std::cout<<ele<<"\n";
} 
return 0;
}
