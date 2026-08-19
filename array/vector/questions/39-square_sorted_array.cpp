#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> sortedSquares(vector<int>& v) {
    int n = v.size();
    vector<int> result(n);
    
    int left = 0;
    int right = n - 1;
    int k = n - 1; // Result array ko peeche se bharenge

    while (left <= right) {
        int leftSquare = v[left] * v[left];
        int rightSquare = v[right] * v[right];

        if (leftSquare > rightSquare) {
            result[k] = leftSquare;
            left++;
        } else {
            result[k] = rightSquare;
            right--;
        }
        k--;
    }
    return result;
}

int main() {
    vector<int> v = {-4, -1, 0, 3, 10};

    vector<int> result = sortedSquares(v);

    cout << "Sorted squares: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
