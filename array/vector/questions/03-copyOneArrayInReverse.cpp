#include<iostream>
#include<vector>
using namespace std;

// copy one array to another array in reverse order 

int main(){
    int size;
    cout<<"Enter vector size: ";
    cin>>size;

    vector<int>v(size);

    cout<<"Enter vector elements: ";
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

    vector<int>v1(size);

    for(int i=0;i<v.size();i++){
        v1[i] = v[size-1-i];
    }
    cout<<"v vector: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"v1 vector: ";

    for(int i=0;i<v.size();i++){
        cout<<v1[i]<<" ";
    }


}