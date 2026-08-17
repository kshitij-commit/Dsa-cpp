#include <iostream>
#include <vector>
using namespace std;

bool checkSortedRotated(vector<int>& v) {
    int count = 0;
    int n = v.size();

    for (int i = 0; i < n; i++) {
        // Agar agla element pichle se chota hai, toh ek dip mila
        if (v[i] > v[(i + 1) % n]) {
            count++;
        }
    }

    // Sorted and rotated vector mein zyada se zyada 1 hi dip ho sakta hai
    return (count <= 1);
}

int main() {
    // Test Case 1: Sorted aur Rotated hai (True aana chahiye)
    vector<int> v1 = {3, 4, 5, 1, 2}; 
    if (checkSortedRotated(v1)) {
        cout << "v1: True (Sorted & Rotated)" << endl;
    } else {
        cout << "v1: False" << endl;
    }

    // Test Case 2: Sorted aur Rotated nahi hai (False aana chahiye)
    vector<int> v2 = {2, 1, 3, 4}; 
    if (checkSortedRotated(v2)) {
        cout << "v2: True" << endl;
    } else {
        cout << "v2: False (NOT Sorted & Rotated)" << endl;
    }

    return 0;
}
