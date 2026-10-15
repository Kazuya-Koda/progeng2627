#include <iostream>
#include <string>
int main()
{
    double input, output;
    bool verify = true;
    std::string unitIn, unitOut;
    std::cin >> input >> unitIn;
    if ((unitIn == "F")||(unitIn == "f"))
    {
        unitOut = "C";
        output = (input - 32) * (5.0/9);
    }
    else if ((unitIn == "C")||(unitIn == "c"))
    {
        unitOut = "F";
        output = input * (9/5) + 32;
    }
    else
    {
        verify = false;
    }
    if (verify)
    {
        std::cout << output << unitOut;
    }
    else
    {
        std::cout << "error";
    }
}