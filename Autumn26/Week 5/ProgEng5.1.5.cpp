//number of occurences
#include<iostream>
#include<vector>
int main()
{
    int n;
    double s,temp;
    std::cin >> n;
    std::vector<double> a;
    std::vector<int> index;
    for (int i=0;i<n;i++)
    {
        std::cin >> temp;
        a.push_back(temp);
    }
    std::cin >> s;
    temp=0;
    for (int i=0;i<a.size();i++)
    {
        if (a[i]==s)
        {
            temp++;
            index.push_back(i);
        }
    }
    std::cout << "There are: " << temp << " ocurrences of " << s << " at indeces: ";
    for (int j=0; j<index.size();j++)
    {
        std::cout << index[j] << " ";
    }
}