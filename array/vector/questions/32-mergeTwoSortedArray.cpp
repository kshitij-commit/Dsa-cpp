#include <iostream>
#include <vector>
using namespace std;

void mergev1v2(vector<int> v1, vector<int> v2, vector<int> v3)
{
    int newSize;

    if (size1 < size2)
        newSize = size1;
    else
        newSize = size2;

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < j)
    {
        if (v1[i] <= v2[j])
        {
            v3[k] = v1[i];
            i++;
            k++;
        }
        else
        {
            v3[k] = v2[j];
            j++;
            k++;
        }
    }
    if (size1 < size2)
    {
        for (j; j < size2; j++)
        {
            v3[k] = v2[j];
            k++;
            j++;
        }
    }
    else
    {
        for (i; i < size1; i++)
        {
            v3[k] = v1[i];
            i++;
            k++;
        }
    }
}

int main()
{
    int size1;
    cout << "Enter size of 1st vector: ";
    cin >> size1;
    int size2;
    cout << "Enter size of 2nd vector: ";
    cin >> size2;

    vector<int> v1;
    cout << "Enter vector one elements: ";

    for (int i = 0; i < size1; i++)
    {
        cin >> v1[i];
    }
    vector<int> v2;
    cout << "Enter vector one elements: ";

    for (int i = 0; i < size2; i++)
    {
        cin >> v2[i];
    }
    vector<int> v3;
    mergev1v2(v1, v2, v3);
}