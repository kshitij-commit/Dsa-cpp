#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& v) {
    if (v.empty()) return 0;
    
    int write = 1; // Pehla element hamesha unique hota hai

    for (int read = 1; read < v.size(); read++) {
        // Agar naya element pichle wale se alag hai, toh yeh unique hai
        if (v[read] != v[read - 1]) {
            v[write] = v[read];
            write++;
        }
    }
    return write; // Unique elements ka count
}

int main() {
    vector<int> v = {1, 1, 2, 2, 3, 4, 4}; // Actual unique: 1, 2, 3, 4

    int uniqueCount = removeDuplicates(v);

    cout << "Unique count: " << uniqueCount << endl;
    cout << "Vector after removing duplicates: ";
    for (int i = 0; i < uniqueCount; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
