#include<iostream>
#include<vector>
using namespace std;
vector<int> sort(vector<int>&v){
    
}
int main(){
    int size;
    cout<<"Enter size of vector:";
    cin>>size;

    vector<int>v(size);
    for(int i=0;i<size;i++){
        cin>>v[i];
    }
    sort(v);
}