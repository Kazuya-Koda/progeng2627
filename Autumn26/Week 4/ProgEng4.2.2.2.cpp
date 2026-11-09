//integer division program
#include <iostream>
int intdivide(int a,int b,int& rem)
{
    rem=a%b;
    return a/b;
}
int main()
{
    int a, b, rem;
    std::cin >> a >> b;
    std::cout << "result: " << intdivide(a,b,rem) << std::endl
    << "remainder: " << rem <<std::endl;
}