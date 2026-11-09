#include <iostream>
#include <cmath>
double mypow(double base, int exp){
    double result=1;
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
double sumofpow(double x,int n)
{
    double out=0;
    for (int i=1;i<n+1;i++)
    {
        out=out+mypow(x,i);
    }
    return out;
}
int main()
{
    std::cout << "x;n" << std::endl;
    std::cout << "2;5: " << (sumofpow(2,5)==62) <<std::endl;
    std::cout << "4.2;3: " << sumofpow(4.2,3) <<std::endl;
    std::cout << "-23;5: " << (sumofpow(-23,5)==-6168163) <<std::endl;
}