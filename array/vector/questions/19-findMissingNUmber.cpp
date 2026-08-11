// Input

// 1 2 3 5

// Output

// 4


#include <iostream>
using namespace std;

int missingNumber(int arr[], int n)
{
    int sum = (n + 1) * (n + 2) / 2;

    for (int i = 0; i < n; i++)
        sum -= arr[i];

    return sum;
}

int main()
{
    int arr[] = {1,2,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << missingNumber(arr,n);
}