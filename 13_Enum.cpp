#include<iostream>
enum Color
{
    color_black, // assigned 0
    color_red, // assigned 1
    color_blue, // assigned 2
    color_green, // assigned 3
    color_white, // assigned 4
    color_cyan, // assigned 5
    color_yellow, // assigned 6
    color_magenta // assigned 7
};
int main(){ 
Color paint{color_white};
std::cout << paint;
}
/*
enum Color
{
  red,
  blue, // blue is put into the global namespace
  green
};
 
enum Feeling
{
  happy,
  tired,
  blue // error, blue was already used in enum Color in the global namespace
};
*/