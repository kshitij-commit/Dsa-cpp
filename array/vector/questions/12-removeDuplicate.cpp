#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n)
{
    int j = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[j])
            arr[++j] = arr[i];
    }

    return j + 1;
}

int main()
{
    int arr[] = {1,1,2,2,3,4,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int size = removeDuplicates(arr,n);

    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
}