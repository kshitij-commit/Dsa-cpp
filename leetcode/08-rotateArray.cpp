#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotateArray(vector<int>& nums, int k)
{
    k = k % nums.size();
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin()+k);
    reverse(nums.begin()+k, nums.end());

    
}
int main()
{
    int size;
    cout << "Enter vector size: ";
    cin >> size;

    vector<int> v(size) ;
    cout << "Enter elements of array: ";
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    int k;
    cout << "Enter times of rotation: ";
    cin >> k;
    rotateArray(v, k);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}