//better prime number detector
#include<iostream>
#include<string>
int main()
{
    int n,i=2;
    std::string is_prime=" is prime";
    std::cout << "Enter a number larger than 1:" <<std::endl;
    std::cin >> n;
    while ((is_prime==" is prime")&&(i<(n/2)))
    {
        if (n%i==0)
        {
            is_prime=" is not prime";
        }
        i++;
    }
    std::cout << n << is_prime;
}