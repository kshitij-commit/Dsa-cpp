#include <iostream>
#include <climits>
using namespace std;

int findSecMax(int arr[], int size) {

    if (size < 2)
        return -1;

    int maxElement = arr[0];
    int secElement = INT_MIN;

    for (int i = 1; i < size; i++) {

        if (arr[i] > maxElement) {
            secElement = maxElement;
            maxElement = arr[i];
        }
        else if (arr[i] > secElement && arr[i] != maxElement) {
            secElement = arr[i];
        }
    }

    if (secElement == INT_MIN)
        return -1;

    return secElement;
}

int main() {

    int size;
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
        cin >> arr[i];

    int ans = findSecMax(arr, size);

    if (ans == -1)
        cout << "There is no second maximum.";
    else
        cout << ans;
}