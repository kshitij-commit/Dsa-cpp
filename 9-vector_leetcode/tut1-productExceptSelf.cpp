#include<iostream>
#include<vector>
using namespace std;
// 238. Product of Array Except Self
// Medium
// Topics
// premium lock icon
// Companies
// Hint
// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

// You must write an algorithm that runs in O(n) time and without using the division operation.

// Example 1:

// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]
// Example 2:

// Input: nums = [-1,1,0,-3,3]
// Output: [0,0,9,0,0]


vector<int> produtExceptSelf(vector<int>& nums){
    int n=nums.size();
    vector<int>ans(n);
    ans[0]=1;
    // left side array
    for(int i=1;i<n;i++){
        ans[i]=ans[i-1]*nums[i-1];
    }
    // right side product
    int right=1;
    for(int i=n-1;i>=0;i--){
        ans[i]=ans[i]*right;
        right=right*nums[i];
    }
    return ans;
}
int main(){
    int size;
    cout<<"Enter size of array:";
    cin>>size;

    vector<int>v(size);

    for(int i=0;i<size;i++){
        cin>>v[i];
    }
   vector<int>res=produtExceptSelf(v);
   for(int i:res){
        cout<<i<<" ";
   }
}