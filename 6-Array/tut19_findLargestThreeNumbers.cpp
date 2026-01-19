#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int size;
    cout << "Enter size of array:";
    cin >> size;

    vector<int> v(size);
    cout << "Enter Elements:";
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }

    if (size < 3)
    {
        cout << "Invalid / Not possible.";
        return 0;
    }

    int max = INT_MIN;
    int smax = INT_MIN;
    int tmax = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (v[i] >= max)
        {
            tmax = smax;
            smax = max;
            max = v[i];
        }
        else if(v[i]>=smax){
            tmax=smax;
            smax=v[i];
        }else if(v[i]>=tmax){
            tmax=v[i];
        }
    }
   
    cout << "max is : " << max << "\nsmax is: " << smax << "\ntmax is: " << tmax;
}