// Print the given Number Spiral pattern
// Example for rows = 4:
//
// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter rows: ";
    cin >> rows;

    int n = 2 * rows - 1; // total size of the grid

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int top = i - 1;
            int left = j - 1;
            int right = n - j;
            int bottom = n - i;
            int minDist = min(min(top, bottom), min(left, right));

            cout << rows - minDist;
        }
        cout << endl;
    }

    return 0;
}
