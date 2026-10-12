#include <iostream>
//currency converter
int main()
{
    double pound, rate;
    std::cout << "Enter amount" << std::endl;
    std::cin >> pound;
    std::cout << "Enter exchange rate to euros" << std::endl;
    std::cin >> rate;
    std::cout << "£" << pound << " -> €" << pound * rate;
}