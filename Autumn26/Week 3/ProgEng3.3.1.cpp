//times tables
#include <iostream>
int main()
{
    int n;
    std::cin >> n;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            std::cout << (j+1)*(i+1) << "\t";
        }
        std::cout << std::endl;
    }
}