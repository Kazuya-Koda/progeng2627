#include<iostream>
#include<vector>
int main()
{
    std::vector<int> myvector;
    myvector.push_back(20);
    myvector.push_back(10);
    myvector.push_back(5);
    std::cout<< myvector[0]*(myvector[1]+myvector[2]);
}


