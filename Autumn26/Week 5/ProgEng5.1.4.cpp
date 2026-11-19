//numbers in a vector that are less than a number
#include<iostream>
#include<vector>
int main()
{
    int n;
    double t,temp;
    std::cin >> n;
    std::vector<double> v;
    for (int i=0;i<n;i++)
    {
        std::cin >> temp;
        v.push_back(temp);
    }
    std::cin >> t;
    for (int i=0;i<v.size();i++)
    {
        if (v[i]<t)
        {
            std::cout << v[i] << std::endl;
        }
    }
}