//primes in range
#include <iostream>
bool smallest_factor(int n)
{
    for (int i=2;i<n/2+1;i++)
    {
        if (n%i==0)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int a,b;
    std::cin >> a >> b;
    for (int i=a;i<(b+1);i++)
    {
        if (!smallest_factor(i))
        {
            std::cout << i <<std::endl;
        }
    }
}
