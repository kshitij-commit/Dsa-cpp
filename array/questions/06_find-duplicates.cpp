/*
------------------------------------------------------------
Problem: Find Duplicate Elements in an Array

Statement:

Given an array of integers, find and print all duplicate
elements present in the array.


If there are no duplicate elements, return -1.

Input:
- First line contains an integer n (size of the array).
- Second line contains n integers.

Output:
- Print all duplicate elements.
- Print each duplicate only once.

Example 1:

Input:
7
1 2 3 2 4 5 1

Output:
1 2

Example 2:

Input:
6
5 5 5 5 5 5

Output:
5

Example 3:

Input:
5
1 2 3 4 5

Output:
No Duplicates

Constraints:
1 <= n <= 10^5
------------------------------------------------------------
*/
#include<iostream>
using namespace std;
#include<vector>

#include <iostream>
#include <vector>
using namespace std;

vector<int> findDuplicates(int arr[], int size) {

    vector<int> duplicates;

    for (int i = 0; i < size - 1; i++) {

        for (int j = i + 1; j < size; j++) {

            if (arr[i] == arr[j]) {

                bool alreadyPresent = false;

                // Check whether duplicate is already stored
                for (int k = 0; k < duplicates.size(); k++) {

                    if (duplicates[k] == arr[i]) {
                        alreadyPresent = true;
                        break;
                    }
                }

                if (!alreadyPresent) {
                    duplicates.push_back(arr[i]);
                }

                // No need to check further for arr[i]
                break;
            }
        }
    }

    if (duplicates.empty()) {
        duplicates.push_back(-1);
    }

    return duplicates;
}

int main() {

    int size;
    cout << "Enter size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter array elements: ";

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    vector<int> ans = findDuplicates(arr, size);

    if (ans.size() == 1 && ans[0] == -1) {
        cout << "No Duplicates";
    } else {
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
    }

    return 0;
}