//bmi calculator
#include <iostream>
int main()
{
    double weight, height, BMI;
    std::cout << "Enter your weight in kg" <<std::endl;
    std::cin >> weight;
    std::cout << "Enter your height in meters" << std::endl;
    std::cin >> height;
    BMI = weight / (height * height);
    std::cout << "Your BMI is: " << BMI;
}