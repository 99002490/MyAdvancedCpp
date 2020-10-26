With normal non-member functions, a function can’t call a function that’s defined “below” it (without a forward declaration):

void x()
{
// You can't call y() from here unless the compiler has already seen a forward declaration for y()
}

void y()
{
}



With member functions, this limitation doesn’t apply:

class foo
{
public:
     void x() { y(); } // okay to call y() here, even though y() isn't defined until later in this class
     void y() { };
};


//ideal class.
#include <iostream>
 
class DateClass // members are private by default
{
    int m_month; // private by default, can only be accessed by other members
    int m_day; // private by default, can only be accessed by other members
    int m_year; // private by default, can only be accessed by other members
 
public:
    void setDate(int month, int day, int year) // public, can be accessed by anyone
    {
        // setDate() can access the private members of the class because it is a member of the class itself
        m_month = month;
        m_day = day;
        m_year = year;
    }
 
    void print() // public, can be accessed by anyone
    {
        std::cout << m_month << '/' << m_day << '/' << m_year;
    }
};
 
int main()
{
    DateClass date;
    date.setDate(10, 14, 2020); // okay, because setDate() is public
    date.print(); // okay, because print() is public
    std::cout << '\n';
 
    return 0;
}
