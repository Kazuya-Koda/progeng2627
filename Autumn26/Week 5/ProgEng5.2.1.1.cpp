#include <iostream>
#include <vector>
double sumvector(const std::vector<double>& v)
{
    double sum=0;
    for (int i=0;i<v.size();i++)
    {
        sum=sum+v.at(i);
        v.push_back(1000);
    }
    return sum;
}
int main()
{
    std::vector<double> a;
    a.push_back(3);
    a.push_back(0.5);
    a.push_back(-1);
    std::cout<< "the sum is: " << sumvector(a);
}