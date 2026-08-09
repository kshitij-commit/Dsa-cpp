#include <iostream>
using namespace std;

int majority(int arr[], int n)
{
    int count = 0;
    int candidate = 0;

    for (int i = 0; i < n; i++)
    {
        if (count == 0)
            candidate = arr[i];

        count += (arr[i] == candidate) ? 1 : -1;
    }

    count = 0;

    for (int i = 0; i < n; i++)
        if (arr[i] == candidate)
            count++;

    return (count > n/2) ? candidate : -1;
}

int main()
{
    int arr[] = {2,2,1,2,3,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<majority(arr,n);
}