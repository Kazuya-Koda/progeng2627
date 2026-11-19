#include <iostream>
#include <vector>
int search_vector(int n, const std::vector<int>& vin)
{
    for (int i=0;i<vin.size();i++)
    {
        if (vin[i]==n)
        {
            return i;
        }
    }
    return -1;
}
int main ()
{
    std::vector<int>v;
    int search=10;
    std::cout << (search_vector(search,v)==-1) << std::endl;
    v={1,1,1,1,1,1,1,1,1};
    search=1;
    std::cout << (search_vector(search,v)==0) << std::endl;
    v={10,20,30,40,200000000,1,-1000000,100,0};
    search=0;
    std::cout << (search_vector(search,v)==8) << std::endl;
    v={0,1,2,3,4,5,6,7,0};
    search=0;
    std::cout << (search_vector(search,v)==0) << std::endl;
    v={1};
    search=1;
    std::cout << (search_vector(search,v)==0) << std::endl;
}