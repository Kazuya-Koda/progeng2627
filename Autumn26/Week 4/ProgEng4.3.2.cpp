#include <iostream>
int smallest_factor(int n)
{
    for (int i=2;i<n/2+1;i++)
    {
        if (n%i==0)
        {
            return i;
        }
    }
    return 0;
}
int main()
{
    for (int i=1;i<4;i++)
    {
        std::cout << (smallest_factor(i)==0) << std::endl;
    }
    std::cout << (smallest_factor(6)==2) << std::endl;
    std::cout << (smallest_factor(169)==13) << std::endl;
    std::cout << (smallest_factor(12345787)==0) << std::endl;
    std::cout << (smallest_factor(60)==2) << std::endl;
}
