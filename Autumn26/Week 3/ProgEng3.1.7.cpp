#include <iostream>
int main()
{
    int input=5, total=0, counter=0;
    while (input!=0)
    {
        std::cout << "Enter a number: ";
        std::cin >> input;
        total = total + input;
        counter = counter + 1;
        std::cout << "The average so far is " << total/counter << std::endl;
    }

}
