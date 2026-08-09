#include <iostream>
#include <climits>
using namespace std;

void leaders(int arr[], int n)
{
    int mx = INT_MIN;

    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] >= mx)
        {
            cout << arr[i] << " ";
            mx = arr[i];
        }
    }
}

int main()
{
    int arr[] = {16,17,4,3,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    leaders(arr,n);
}