#include <iostream>
#include <vector>
using namespace std;
// find the doublet whose sum is equal to the given value.
// Leetcode-1
int main()
{
    int size;
    cout << "Enter size of vector:";
    cin >> size;

    vector<int> v(size);
    cout << "Enter elements:";
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }

    int x;
    cout << "Enter x:";
    cin >> x;

   

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {

            if (v[i] + v[j] == x)
            {
                cout << "(" << i << "," << j << ")" << endl;
            }
        }
    }
}