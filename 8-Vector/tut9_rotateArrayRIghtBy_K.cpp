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

int reverse(vector<int> &v, int start, int end)
{
    

    while (start < end)
    {

        int temp = v[start];
        v[start] = v[end];
        v[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    int size;
    cout << "enter size of vector:";
    cin >> size;

    if (size == 0)
        return 0;

    vector<int> v(size);

    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    int k;
    cout << "enter number of rotation:";
    cin >> k;

    if (k >= size)
    {
        k = k % size;
    }
    reverse(v, 0, size - 1);
    reverse(v, 0, k - 1);
    reverse(v, k, size - 1);

    for (int i : v)
    {
        cout << i <<" ";
    }
}
