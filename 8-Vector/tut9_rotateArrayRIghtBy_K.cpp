// Q4. Rotate array right by K
// Input:  [1, 2, 3, 4, 5]
// k = 1
// Output: [5, 1, 2, 3, 4]

// Input:  [1, 2, 3, 4, 5]
// k = 2
// Output: [4, 5, 1, 2, 3]

// Input:
// [1,2,3,4,5,6,7], k = 3
// Output:
// [5,6,7,1,2,3,4]
// Test 3
// Input:  [1, 2, 3, 4, 5]
// k = 5
// Output: [1, 2, 3, 4, 5]

// Rules:
// In-place
// k can be > n
// Think before coding

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;
    cout << "enter size of vector:";
    cin >> size;
    vector<int> v(size);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    int k;
    cout << "enter number of rotation:";
    cin >> k;

    int l = 0;

    while (l < k)
    {
        int temp = v[v.size() - 1];

        for (int i = 0; i < v.size(); i++)
        {
            v[v.size()-1]=v[v.size()-1];
        }
        v[0] = temp;
        l++;
        cout << endl;
    }

    for (int i : v)
    {
        cout << i << " ";
    }
}
