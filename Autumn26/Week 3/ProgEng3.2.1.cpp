//x^n
#include <iostream>
int main()
{
    int n;
    double x,output=1;
    std::cin >> x >> n;
    for(int i=0;i<n;i++)
    {
        output = output * x;
    }
    std::cout << output;
}


