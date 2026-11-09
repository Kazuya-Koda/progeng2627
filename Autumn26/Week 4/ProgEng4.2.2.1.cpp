//area and perimeter of a rectangle
#include <iostream>
double rectangle(double a,double b,double& area)
{
    area = a*b;
    return 2*(a+b);
}
int main()
{
    double a,b,area;
    std::cout << "Input the 2 side lengths of the rectangle" << std::endl;
    std::cin >> a >> b;
    std::cout << "Perimeter = " << rectangle(a,b,area) << std::endl << "Area = " << area;
}