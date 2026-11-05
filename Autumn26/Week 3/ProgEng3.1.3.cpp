//multiplication through repeated addition using while loops
//x: value that is being added, n: amount of times added by
#include <iostream>
int main()
{
    double x, acc=0;
    int n, i=0;
    std::cin >> x >> n;
    while (i<n)
    {
        acc = acc + x;
        i = i + 1;
    }
    std::cout << x << "*" << n << "=" << acc;
}