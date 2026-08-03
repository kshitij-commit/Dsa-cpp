#include <iostream>
using namespace std;

void moveZeroes(int arr[], int n)
{
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
            swap(arr[i], arr[j++]);
    }
}

int main()
{
    int arr[] = {1,0,5,0,3,0,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    moveZeroes(arr,n);

    for(int x : arr)
        cout << x << " ";
}