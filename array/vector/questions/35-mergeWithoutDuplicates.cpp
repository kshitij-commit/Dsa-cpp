#include <iostream>
#include <vector>
using namespace std;

void mergeWithoutDuplicates(vector<int>& v1, vector<int>& v2, vector<int>& v3) {
    int i = 0;
    int j = 0;

    while (i < v1.size() && j < v2.size()) {
        int nextElement;
        
        if (v1[i] <= v2[j]) {
            nextElement = v1[i];
            i++;
        } else {
            nextElement = v2[j];
            j++;
        }

        if (v3.empty() || v3.back() != nextElement) {
            v3.push_back(nextElement);
        }
    }

    while (i < v1.size()) {
        if (v3.empty() || v3.back() != v1[i]) {
            v3.push_back(v1[i]);
        }
        i++;
    }

    while (j < v2.size()) {
        if (v3.empty() || v3.back() != v2[j]) {
            v3.push_back(v2[j]);
        }
        j++;
    }
}

int main() {
    vector<int> v1 = {1, 3, 5, 5, 7};
    vector<int> v2 = {2, 3, 5, 6, 8};
    vector<int> v3;

    mergeWithoutDuplicates(v1, v2, v3);

    cout << "Merged without duplicates: ";
    for (int x : v3) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
