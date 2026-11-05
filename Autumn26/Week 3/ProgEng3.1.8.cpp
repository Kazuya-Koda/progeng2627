//dividend/divisor
#include <iostream>
int main()
{
    int divisor, dividend, quotient=0;
    std::cin >> dividend >> divisor;
    while (dividend>=divisor)
    {
        dividend = dividend - divisor;
        quotient = quotient + 1;
    }
    if (dividend!=0)
    {
        std::cout << quotient << " r:" << dividend;
    }
    else
    {
        std::cout << quotient;
    }
}