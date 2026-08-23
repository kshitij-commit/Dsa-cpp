// #33 — Check if Array Is Sorted and Rotated

// Question:
// Given an integer array nums, return true if the array was originally sorted 
// in non-decreasing/ascending order and then rotated some number of positions. Otherwise, return false.
#include<iostream>
#include<vector>

using namespace std;



bool checkSortedRotated(vector<int> v){

    int count = 0;
    
    for(int i=0;i<v.size();i++){
        if(v[i]>v[(i+1)%v.size()])
            count++;
    }

    return count <=1;

}


int main(){
    int size;
    cout<<"Enter vector size: ";
    cin>>size;

    vector<int>v(size);
    cout<<"Enter vector Elements: ";
    for(int i = 0;i < size;i++){
        cin>>v[i];
    }

    bool res = checkSortedRotated(v);
    cout<<res;
}