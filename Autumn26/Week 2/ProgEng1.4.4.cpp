#include <iostream>
//rectangle
int main()
{
    double a, b;
    std::cout << "Enter side length a:" << std::endl;
    std::cin >> a;
    std::cout << "Enter side length b:" << std::endl;
    std::cin >> b;
    std::cout << "Perimiter: " << 2*(a+b) << std::endl;
    std::cout << "Area: " << a*b << std::endl;
}