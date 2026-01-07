#include <iostream>
#include <vector>
using namespace std;

// Q5. Remove duplicates from sorted array
// Input:
// [1,1,2,2,3,3,3,4]
// Output:
// [1,2,3,4]

// ✅ Test Case 2 — All elements same
// Input:  [5,5,5,5,5]
// Output: [5]
// Length: 1

// ✅ Test Case 3 — No duplicates
// Input:  [1,2,3,4,5]
// Output: [1,2,3,4,5]
// Length: 5

// ✅ Test Case 4 — Single element
// Input:  [10]
// Output: [10]
// Length: 1

// ✅ Test Case 5 — Empty array (edge case)
// Input:  []
// Output: []
// Length: 0

// ✅ Test Case 6 — Large duplicates at end
// Input:  [1,2,3,4,5,5,5,5]
// Output: [1,2,3,4,5]
// Length: 5

// ✅ Test Case 7 — Negative numbers
// Input:  [-3,-3,-2,-1,-1,0,0,0,1]
// Output: [-3,-2,-1,0,1]
// Length: 5

// Rules:
// Array is sorted
// In-place
// Return new length
// 👉 This problem checks index discipline

int main()
{
    int size;
    cout << "enter size of vector:";
    cin >> size;

    vector<int> v(size);
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }

    int write = 0;
    int read = 0;
    for (read = 0; read < size; read++)
    {
        if (read==0 ||v[read ] != v[read-1])
        {
            v[write] = v[read];
            write++;
        }
    }

    for (int i = 0; i < write; i++)
    {
        cout << v[i] << " ";
    }
}