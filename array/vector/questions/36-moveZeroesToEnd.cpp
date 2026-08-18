#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& v) {
    int write = 0;

    for (int read = 0; read < v.size(); read++) {
        if (v[read] != 0) {
            v[write] = v[read];
            write++;
        }
    }

    while (write < v.size()) {
        v[write] = 0;
        write++;
    }
}

int main() {
    vector<int> v = {0, 1, 0, 3, 12, 0, 5};

    moveZeroes(v);

    cout << "Vector after moving zeros: ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
