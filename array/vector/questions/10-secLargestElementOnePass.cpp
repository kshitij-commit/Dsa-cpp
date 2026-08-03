#include <iostream>
#include <climits>
using namespace std;

int secondLargest(int arr[], int n)
{
    int first = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first)
        {
            second = arr[i];
        }
    }

    return second;
}

int main()
{
    int arr[] = {4, 7, 2, 9, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << secondLargest(arr, n);
}