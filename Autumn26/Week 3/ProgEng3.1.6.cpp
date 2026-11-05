//sum so far
#include <iostream>
int main()
{
    int input, sum = 0;
    std::cin >> input >> sum;
    while (input!=0)
    {
        std::cout << "please enter a number:" << std::endl;
        std::cin >> input;
        sum = sum + input;
        std::cout << "the sum so far is: " << sum << std::endl;
    }

}
