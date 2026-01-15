#include <iostream>
#include <vector>
using namespace std;
// find the doublet whose sum is equal to the given value.
// Leetcode-1
int main()
{
    int n;
    cout << "enter n:";
    cin >> n;
    vector<int> v;
    cout << "Enter elements:";
    for (int i = 0; i < n; i++)
    {
        int q;
        cin >> q;
        v.push_back(q);
    }
    vector<int> v1(n);
    for (int i = 0; i < v.size(); i++)
    {
        v1[v.size() - 1 - i] = v[i];
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v1[i] << " ";
    }
}