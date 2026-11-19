#include <iostream>
#include <vector>
void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout)
{
    for (int i=0;i<vin.size();i++)
    {
        if (vin[i]<t)
        {
            vout.push_back(vin[i]);
        }
    }
}
int main()
{
    std::vector<double>v={
        0,1,2,3,4,5,6,7,8,9,-1,-2,-3,-4,-5,-6,-7,0,0.6,0.7,0.8,-0.6,-0.7,-0.8
    },out,pred{-1,-2,-3,-4,-5,-6,-7,-0.6,-0.7,-0.8};
    double compare=0;
    filter_v(v,compare,out);
    for (int i=0;i<out.size();i++)
    {
        std::cout << (out[i]==pred[i]);
    }
    out.clear();
    std::cout << std::endl;


    std::cout << "*******" <<std::endl;
    compare = 0.5;
    pred={0,-1,-2,-3,-4,-5,-6,-7,0,-0.6,-0.7,-0.8};
    filter_v(v,compare,out);
    for (int i=0;i<out.size();i++)
    {
        std::cout << out[i] << " " << (out[i]==pred.at(i)) <<std::endl;
    }

    
    out.clear();
    compare=100000;
    std::cout << std::endl;
    filter_v(v,compare,out);
    for (int i=0;i<out.size();i++)
    {
        std::cout << (out[i]==v.at(i));
    }
    compare=-100000;
    std::cout << std::endl;
    out.clear();
    filter_v(v,compare,out);
    std::cout << (empty(out));
}