#include <iostream>
using namespace std;

void reverse(int arr[], int l, int r)
{
    while (l < r)
        swap(arr[l++], arr[r--]);
}

void leftRotate(int arr[], int n, int k)
{
    k %= n;

    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    reverse(arr,0,n-1);
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    leftRotate(arr,n,2);

    for(int x:arr)
        cout<<x<<" ";
}