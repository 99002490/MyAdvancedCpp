#include<string>
#include<iostream>
int main(){
    std::string name{"raks"};
    //name{"rmai"};
    name="rmai";
    std::cout<<name;
    std::cout << "Enter your full name: ";
    std::string nameInFull{};
    std::getline(std::cin, nameInFull); // read a full line of text into name
    std::cout<<nameInFull;
    return 0;
}