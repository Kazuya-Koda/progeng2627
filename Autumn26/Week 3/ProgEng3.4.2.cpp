//guess the number
//h is for the number is higher than the guess, l is for lower than
//y is for yes, that is my
#include <iostream>
#include <string>
int main()
{
    int nmax, nmin, guess;
    std::string state;
    std::cout << "Enter a minimum value then a maximum value" << std::endl;
    std::cin >> nmin >> nmax;
    while (state!="y")
    {
        guess = nmin+((nmax-nmin)/2);
        std::cout << "Is your number: " << guess << std::endl;
        std::cin >> state;
        if (state=="h")
        {
            nmin=guess;
        }
        else if (state=="l")
        {
            nmax=guess;
        }
    }

}