#include<iostream>
int main(){
int i1 { 10 };
int i2 { 4 };
 
// convert an int to a float so we get floating point division rather than integer division
float f { static_cast<float>(i1)/(i2)}; 
std::cout<<f<<"\n"; 
return 0;
}