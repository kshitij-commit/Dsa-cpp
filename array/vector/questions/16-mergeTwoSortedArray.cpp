#include <iostream>
using namespace std;

void merge(int a[], int n, int b[], int m)
{
    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (a[i] <= b[j])
            cout << a[i++] << " ";
        else
            cout << b[j++] << " ";
    }

    while (i < n)
        cout << a[i++] << " ";

    while (j < m)
        cout << b[j++] << " ";
}

int main()
{
    int a[] = {1,3,5};
    int b[] = {2,4,6};

    merge(a,3,b,3);
}