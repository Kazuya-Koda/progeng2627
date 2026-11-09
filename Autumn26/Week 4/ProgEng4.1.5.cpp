//exponential program
//x the base, then n as specified in the sum (in the exponent)
#include<iostream>
#include<cmath>
int main()
{
    double n,x, out=0;
    std::cin >> x >> n;
    for (int i=1;i<(n+1);i++)
    {
        out=out+std::pow(x,i);
    }
    std::cout << out;
}