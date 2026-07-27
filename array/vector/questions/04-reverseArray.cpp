#include<iostream>
#include<vector>
using namespace std;

//  Reverse an array without using any extra array.


void reverse(vector<int> &v){
    
    for(int i=0;i<v.size()/2;i++){
        int temp = v[i];
        v[i] = v[v.size()-1-i];
        v[v.size()-1-i] = temp;
        
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

    reverse(v);

    
    cout<<"v vector: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
   


}