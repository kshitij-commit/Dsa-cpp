
// 283. Move Zeroes

// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.


// Example 1:

// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]
// Example 2:

// Input: nums = [0]
// Output: [0]

#include<iostream>
#include<vector>
using namespace std;

void moveZeroes(vector<int>& nums){
    int i = 0;
    int j = 0;

    while(i<nums.size() and j < nums.size()){

        if(nums[i] == 0){
            if(nums[j] != 0){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                i++;
            }
            j++;
        }else{
            i++;
            j++;
        }
    }
}


int main(){

    int size;
    cout<<"Enter vector size: ";
    cin>>size;

    vector<int>v(size);
    cout<<"Enter vector elements: ";

    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

     moveZeroes(v);
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}