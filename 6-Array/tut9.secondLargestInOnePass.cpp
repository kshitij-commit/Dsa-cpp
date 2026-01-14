#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int size;
    cout << "Enter size of array:";
    cin >> size;

    int arr[size];
    cout << "Enter elements:";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int max = INT_MIN;
    int smax = INT_MIN;
    
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            smax = max;
            max = arr[i];
            
        }
        else if (( arr[i]>smax) && arr[i] != max)
        {
            smax = arr[i];
            
        }
    }

    if(smax == INT_MIN ){
        cout<<"No 2nd max.";
    }else{
        cout<<"smax is: "<<smax;
    }

    
}