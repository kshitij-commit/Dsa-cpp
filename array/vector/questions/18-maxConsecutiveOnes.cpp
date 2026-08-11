#include <iostream>
using namespace std;

int maxOnes(int arr[], int n)
{
    int cnt = 0;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            cnt++;
            ans = max(ans, cnt);
        }
        else
        {
            cnt = 0;
        }
    }

    return ans;
}

int main()
{
    int arr[] = {1,1,0,1,1,1,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<maxOnes(arr,n);
}