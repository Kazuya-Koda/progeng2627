//factorial
#include <iostream>
int main()
{
    int n,out=1;
    std::cin >> n;
    for (int i=0;i<n;i++)
    {
        out = out * (n-i);
    }
    std::cout << n << "! = " << out;
}