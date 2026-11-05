//current maximum and minimum
#include <iostream>
int main()
{
    int n;
    std::cout << "Please enter a number:" << std::endl;
    std::cin >> n;
    int curmax=n, curmin=n;
    std::cout << "The current maximum is: " << curmax << std::endl
    << "The current minimum is: " << curmin << std::endl;
    while (n!=0)
    {
        std::cout << "Please enter a number:" << std::endl;
        std::cin >> n;
        if (n>curmax)
        {
            curmax=n;
        }
        else if (n<curmin)
        {
            curmin=n;
        }
        std::cout << "The current maximum is: " << curmax << std::endl
    << "The current minimum is: " << curmin << std::endl;
    }

}