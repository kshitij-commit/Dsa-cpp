#include <iostream>
#include <vector>
using namespace std;

void mergeInPlace(vector<int>& v1, int m, vector<int>& v2, int n) {
    int i = m - 1;     // v1 ke valid data ka aakhiri index
    int j = n - 1;     // v2 ka aakhiri index
    int k = m + n - 1; // v1 ki bilkul aakhiri boundary ka index (khali jagah)

    // Peeche se bade elements ko compare karke v1 ke end mein daalna
    while (i >= 0 && j >= 0) {
        if (v1[i] > v2[j]) {
            v1[k] = v1[i];
            i--;
        } else {
            v1[k] = v2[j];
            j--;
        }
        k--;
    }

    // Agar v2 ke elements abhi bhi bache hain, toh unhe bache hue khali slots mein daalein
    while (j >= 0) {
        v1[k] = v2[j];
        j--;
        k--;
    }
    // Agar v1 ka 'i' bach jata hai, toh use copy karne ki zaroorat nahi hai 
    // kyunki woh pehle se hi v1 mein apni sahi sorted position par hai.
}

int main() {
    // v1 ka actual size 5 hai, par valid elements sirf 3 hain (1, 5, 9)
    vector<int> v1 = {1, 5, 9, 0, 0}; 
    vector<int> v2 = {2, 6};
    
    int m = 3; // v1 ke valid elements ka count
    int n = 2; // v2 ke elements ka count

    mergeInPlace(v1, m, v2, n);

    // Final result print karna
    cout << "Merged v1 in place: ";
    for (int x : v1) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
