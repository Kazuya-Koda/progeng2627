//Collatz conjecture
#include <iostream>
int main()
{
    int n,stepc=0,maxn=1;
    std::cin >> n;
    while (n!=1)
    {
        if (maxn<n)
        {
            maxn=n;
        }
        if (n%2==0)
        {
            n=n/2;
        }
        else
        {
            n=3*n+1;
        }
        stepc++;
        std::cout << n << std::endl;
    }
    std::cout << "Stepcount: " << stepc << std::endl << "Maximum number: " << maxn;


}
