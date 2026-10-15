#include <iostream>
int main()
{
    int year;
    bool leap = false;
    std::cout << "Enter a year" << std::endl;
    std::cin >> year;
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                leap = true;
            }
        }
        else
        {
            leap = true;
        }
    }
    if (leap == 1)
    {
        std::cout << "Leap year";
    }
    else
    {
        std::cout << "Not a leap year";
    }
}
