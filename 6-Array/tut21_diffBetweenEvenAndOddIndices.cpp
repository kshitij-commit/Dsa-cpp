#include <iostream>
#include <vector>
using namespace std;
//  find difference between elements at even indices and odd indices.

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
    int even = 0;
    int odd = 0;
    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
        {
            even += v[i];
        }
        else
        {
            odd += v[i];
        }
    }
    cout << "Difference of " << even << " and " << odd << " is:" << even - odd;
}