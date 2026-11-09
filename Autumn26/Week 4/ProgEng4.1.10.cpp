//the maximum of 2 numbers
#include <iostream>
double max2(double a,double b);
int main()
{
    double a,b;
    std::cin >> a >> b;
    std::cout << "The maximum number is: " << max2(a,b);
}
double max2(double a,double b)
{
    if (a>b)
    {
        return a;
    }
    return b;
}
