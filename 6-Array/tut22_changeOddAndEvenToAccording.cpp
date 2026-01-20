#include <iostream>
#include <vector>
using namespace std;
// Change odd indexed value to second multiple and even indexed value to increment by 10.
int main()
{
    int size;
    cout << "Enter size of array:";
    cin >> size;
    if (size == 0)
    {
        cout << "Array is sorted.";
        return 0;
    }
    vector<int> v(size);
    cout << "Enter elements:";
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
        {
            v[i] += 10;
        }
        else
        {
            v[i] *= 2;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
}