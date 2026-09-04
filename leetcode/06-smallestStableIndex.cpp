// 3903. Smallest Stable Index I

// You are given an integer array nums of length n and an integer k.

// For each index i, define its instability score as max(nums[0..i]) - min(nums[i..n - 1]).

// In other words:

// max(nums[0..i]) is the largest value among the elements from index 0 to index i.
// min(nums[i..n - 1]) is the smallest value among the elements from index i to index n - 1.
// An index i is called stable if its instability score is less than or equal to k.

// Return the smallest stable index. If no such index exists, return -1.

 

// Example 1:

// Input: nums = [5,0,1,4], k = 3

// Output: 3

// Explanation:

// At index 0: The maximum in [5] is 5, and the minimum in [5, 0, 1, 4] is 0, so the instability score is 5 - 0 = 5.
// At index 1: The maximum in [5, 0] is 5, and the minimum in [0, 1, 4] is 0, so the instability score is 5 - 0 = 5.
// At index 2: The maximum in [5, 0, 1] is 5, and the minimum in [1, 4] is 1, so the instability score is 5 - 1 = 4.
// At index 3: The maximum in [5, 0, 1, 4] is 5, and the minimum in [4] is 4, so the instability score is 5 - 4 = 1.
// This is the first index with an instability score less than or equal to k = 3. Thus, the answer is 3.


#include<iostream>
#include<vector>
using namespace std;

int smallestIndex(vector<int> nums, int k){

    int i = 0;
    int j = nums.size();

    while(j>0){
        int max = nums[i];
        for(int k = 0;k<=i;k++){
            if(nums[k] > max)
                max  = nums[k];
        }
        int min = nums[i];
        for(int k = i;k < nums.size();k++){
            if(nums[k] < min)
                min = nums[k];
        }

        if((max - min) <= k)  
            return i;

        i++;
        j--;
    }
    return -1;
}


int main(){
    int size;
    cout<<"Enter size of vector: ";
    cin>>size;

    vector<int>v(size);
    cout<<"Entre vector elements: ";
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

    int k;
    cout<<"Enter value of k: ";
    cin>>k;
    
    int i = smallestIndex(v, k);
    cout<<i;


}