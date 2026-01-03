#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter array size: ";
    cin >> size;
    int arr[size];
    cout << "enter array elements:";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int newarr[size];
    for (int i = 0; i < size; i++)
    {
        newarr[i] = 1;

        for (int j = 0; j < size; j++)
        {
            if (i != j)
            {
                newarr[i] *= arr[j];
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << newarr[i] << " ";
    }
}