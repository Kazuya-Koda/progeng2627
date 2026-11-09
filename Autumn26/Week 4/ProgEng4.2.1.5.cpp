//sort 3 numbers
#include<iostream>
void myswap(double&a, double&b)
{
    double temp=a;
    a=b;
    b=temp;
}
void sort_three_numbers(double& a, double& b, double& c)
{
    if (b<a&&b<c)
    {
        myswap(a,b);
    }
    if (c<a&&c<b)
    {
        myswap(a,c);
    }
    if (c<b)
    {
        myswap(b,c);
    }
}
int main()
{
    for (int i=0;i<6;i++)
    {
        double a=(i+2)/2,b =3-i%3,c=(i%3-i/3*3+5)/2;
        std::cout << a << b << c <<std::endl;
        sort_three_numbers(a,b,c);
        std::cout << (a==1) << std::endl;
        std::cout << (b==2) << std::endl;
        std::cout << (c==3) << std::endl;
    }
}
