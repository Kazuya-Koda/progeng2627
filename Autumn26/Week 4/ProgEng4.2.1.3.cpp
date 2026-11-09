#include <iostream>
#include <string>
void stringswap(std::string&a,std::string&b)
{
    std::string temp=a;
    a=b;
    b=temp;
}
int main()
{
    std::string hello="hello", goodbye = "goodbye";
    stringswap(hello, goodbye);
    std::cout << (hello=="goodbye") << std::endl << (goodbye=="hello");
}