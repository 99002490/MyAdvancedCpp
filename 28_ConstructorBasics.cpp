#include <iostream>
 
class Something
{
private:
    int m_value1;
    double m_value2;
    char m_value3;
 
public:
    Something(int value1, double value2, char value3='c')
        : m_value1{ value1 }, m_value2{ value2 }, m_value3{ value3 } // directly initialize our member variables
    {
    // No need for assignment here
    }
 
    void print()
    {
         std::cout << "Something(" << m_value1 << ", " << m_value2 << ", " << m_value3 << ")\n";
    }
 
};
 
int main()
{
    Something something{ 1, 2.2 }; // value1 = 1, value2=2.2, value3 gets default value 'c'
    something.print();
    return 0;
}



class Something
{
private:
    const int m_value;
 
public:
    Something(): m_value{ 5 } // directly initialize our const member variable
    {
    } 
};



class Something
{
private:
    const int m_array[5];
 
public:
    Something(): m_array { 1, 2, 3, 4, 5 } // use uniform initialization to initialize our member array
    {
    }
 
};


//Delegate constructors
#include <string>
#include <iostream>
 
class Employee
{
private:
    int m_id{};
    std::string m_name{};
 
public:
    Employee(int id=0, const std::string &name=""):
        m_id{ id }, m_name{ name }
    {
        std::cout << "Employee " << m_name << " created.\n";
    }
 
    // Use a delegating constructor to minimize redundant code
    Employee(const std::string &name) : Employee{ 0, name }
    { }
};
