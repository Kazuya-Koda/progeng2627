#include<iostream>
#include<vector>
void append_vectors
(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout)
{
    vout=vin1;
    for (int i=0; i<vin2.size();i++)
    {
        vout.push_back(vin2[i]);
    }
}
int main()
{
    std::vector<int> v={1,2,3,4,5,6,7},w={8,9,10,11,12,13,14,15,16},out;
    append_vectors(v,w,out);
    for (int i=0;i<16;i++)
    {
        std::cout << (out[i]==i+1);
    }
    std::cout << (out.size()==16);
}
