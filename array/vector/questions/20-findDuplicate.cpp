#include <iostream>
using namespace std;

int findDuplicate(int arr[], int n)
{
    int x = 0;

    for(int i=0;i<n;i++)
        x ^= arr[i];

    for(int i=1;i<n;i++)
        x ^= i;

    return x;
}

int main()
{
    int arr[]={1,3,4,2,2};
    cout<<findDuplicate(arr,5);
}