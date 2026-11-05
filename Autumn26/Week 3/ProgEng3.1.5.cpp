//stop echo
#include <iostream>
#include <string>
int main()
{
    std::string text;
    std::cin >> text;
    while((text!="STOP")&&(text!="stop")&&(text!="Stop"))
    {
        std::cout << text << std::endl;
        std::cin >> text;
    }
}



