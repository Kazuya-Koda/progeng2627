//sum of powers with mypow
//enter x then n
#include <iostream>

double mypow(double base, int exp){
    double result=1;
    // we declare a variable for the result
    // (should it be initialised? to what value?)
    if (exp>0)
    {
        for (int i=0;i<exp;i++)
        {
            result=result*base;
        }
    }
    else
    {
        for (int i=0;i<-exp;i++)
        {
            result=result/base;
        }
    }

    return result;
}
int main()
{
    double n,x, out=0;
    std::cin >> x >> n;
    for (int i=1;i<(n+1);i++)
    {
        out=out+mypow(x,i);
    }
    std::cout << out;
}