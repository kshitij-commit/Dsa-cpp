#include <iostream>
#include <vector>
using namespace std;

bool hasCommonElement(vector<int>& v1, vector<int>& v2) {
    int i = 0;
    int j = 0;

    while (i < v1.size() && j < v2.size()) {
        if (v1[i] == v2[j]) {
            return true; // Match mil gaya!
        }
        else if (v1[i] < v2[j]) {
            i++; // Chote wale ko aage badhayein
        } else {
            j++;
        }
    }
    return false; // Koi common element nahi mila
}

int main() {
    vector<int> v1 = {1, 5, 8, 12};
    vector<int> v2 = {2, 6, 8, 15}; // '8' dono mein common hai

    if (hasCommonElement(v1, v2)) {
        cout << "True: Common element exists." << endl;
    } else {
        cout << "False: No common element." << endl;
    }
    return 0;
}
