#include <iostream>
#include <vector>
int min_vector_element(const std::vector<double>& vin)
{
    if (!empty(vin))
    {
        int min=0;
        for (int i=1;i<vin.size();i++)
        {
            if (vin[i]< vin[min])
            {
                min=i;
            }
        }
        return min;
    }
    return -1;
}
int main()
{
    std::vector<double> v{0,1,2,3,4,5};
    std::cout << (min_vector_element(v)==0) << std::endl;
    v={0,0,0,0,0,0,0,0};
    std::cout << (min_vector_element(v)==0) << std::endl;
    v={1,3.4,-0.54545454,10,1000000000000,1,2,0.3};
    std::cout << (min_vector_element(v)==2) << std::endl;
    v={};
    std::cout << (min_vector_element(v)==-1) << std::endl;



}