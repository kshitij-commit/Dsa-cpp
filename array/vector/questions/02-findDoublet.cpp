#include<iostream>
using namespace std;
#include<vector>

int main(){
    int size;
    cout<<"Enter vector size: ";
    cin>>size;


    vector<int>v(size);

    cout<<"Enter vector elements: ";
    
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    // cout<<v.size();

    int target;
    cout<<"Enter target element: ";
    cin>>target;

    for(int i=0;i<v.size()-1;i++){  // 1 3 2 4 3 4 1 6
        for(int j=i+1;j<v.size();j++){
            if(v[i]+v[j] == target){
                cout<<"("<<i<<","<<j<<")"<<" ";
            }
        }
    }
    
}