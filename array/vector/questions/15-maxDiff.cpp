#include <iostream>
#include <climits>
using namespace std;

int maxDifference(int arr[], int n)
{
    int mn = arr[0];
    int ans = INT_MIN;

    for (int i = 1; i < n; i++)
    {
        ans = max(ans, arr[i] - mn);
        mn = min(mn, arr[i]);
    }

    return ans;
}

int main()
{
    int arr[] = {2,3,10,6,4,8,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<maxDifference(arr,n);
}