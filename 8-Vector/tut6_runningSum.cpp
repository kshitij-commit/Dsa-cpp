#include <iostream>
#include <vector>
using namespace std;

// Given an array:
// [1, 2, 3, 4]
// Transform it into:
// [1, 3, 6, 10]

int main()
{
    vector<int> v = {1, 2, 3, 4};
   
    long long  sum=0;
    for (auto it = v.begin(); it != v.end(); it++)
    {   
        sum=sum+ *it;
        *it=sum;
    }
   
    for (int i : v)
    {
        cout << i << " ";
    }
}