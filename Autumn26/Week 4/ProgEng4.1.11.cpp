//maximum of 3 numbers
#include <iostream>
double max3(double a,double b,double c)
{
    if (a>b&&a>c)
    {
        return a;
    }
    if (b>a&&b>c)
    {
        return b;
    }
    return c;
}
int main()
{
    double a,b,c;
    std::cin >> a >> b >> c;
    std::cout << "The largest number is: " << max3(a,b,c);
}