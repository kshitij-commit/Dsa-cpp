// #35 — Merge Two Sorted Arrays Without Duplicates

// Question:
// Given two sorted arrays v1 and v2, merge their elements into a third array v3 such that:

// v3 remains sorted in non-decreasing order.
// Duplicate elements are included only once.
// Both input arrays are already sorted.

#include<iostream>
#include<vector>
using namespace std;


void mergeWithoutDuplicate(vector<int>& v1, vector<int>& v2, vector<int>& v3){
    
    int i = 0;
    int j = 0;
    int k = 0;

    while(i<v1.size() and j<v2.size()){
        int element;
        if(v1[i] <= v2[j]){
            element = v1[i];
            if(v3.empty() || v3.back() != element){
                v3.push_back(element);
                k++;
            }
            i++;

        }else{
            element = v2[j];
            if(v3.empty() || v3.back() != element){
                v3.push_back(element);
                k++;
            }
            j++;
        }
    }

    while(i<v1.size()){
        
        if(v3.empty() || v3.back() != v1[i]){
                v3.push_back(v1[i]);
                k++;
            }
            i++;
    }
    while(j<v2.size()){
        if(v3.empty() || v3.back() != v2[j]){
                v3.push_back(v2[j]);
                k++;
            }
            j++;
    }
}



int main()
{
    int size1;
    cout << "Enter size of 1st vector: ";
    cin >> size1;
    int size2;
    cout << "Enter size of 2nd vector: ";
    cin >> size2;

    vector<int> v1;
    cout << "Enter vector one elements: ";

    for (int i = 0; i < size1; i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
        // cin >> v1[i];
    }
    vector<int> v2;
    cout << "Enter second vector  elements: ";

    for (int i = 0; i < size2; i++)
    {
        int x;
        cin>>x;
        v2.push_back(x);
    }
    vector<int> v3;

    mergeWithoutDuplicate(v1, v2, v3);
    cout<<"Vector 3 elements: ";
    for(int i = 0; i<v3.size();i++){
        cout<<v3[i]<<" ";
    }
}