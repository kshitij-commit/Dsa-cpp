// print the given rhombus pattern 
//    ****
//   ****
//  ****
// ****

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int s = 1; s <= rows - i; s++) {
            cout << " ";
        }

        // Print stars (always equal to rows)
        for (int j = 1; j <= rows; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
