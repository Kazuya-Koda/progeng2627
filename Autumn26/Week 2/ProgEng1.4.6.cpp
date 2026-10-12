//Temp converter
#include <iostream>
int main()
{
    double cel, far;
    std::cout << "Enter temperature in celsius:";
    std::cin >> cel;
    far = (cel * 1.8) + 32;
    std::cout << cel << "° = " << far << "°";
}