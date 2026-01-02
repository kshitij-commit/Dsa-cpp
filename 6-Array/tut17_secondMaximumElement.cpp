
// find second maximum element in the array.

#include<iostream>
#include<climits>
using namespace std;

int main() {
    int n;
    cout << "Enter number of array elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxVal = INT_MIN;
    int secondMax = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > maxVal) {
            secondMax = maxVal;
            maxVal = arr[i];
        } else if (arr[i] < maxVal && arr[i] > secondMax) {
            secondMax = arr[i];
        }
    }

    if (secondMax == INT_MIN) {
        cout << "No second maximum exists." << endl;
    } else {
        cout << "Second Maximum element is: " << secondMax << endl;
    }

    return 0;
}
