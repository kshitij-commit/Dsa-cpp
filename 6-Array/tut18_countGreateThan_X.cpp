#include<iostream>
#include<vector>
using namespace std;
int Count(vector<int>&v, int x){
    int count=0;
    for(int i=0;i<v.size();i++){
        if(v[i]>x){
            count++;
        }
    }
    return count;
}
int main(){
    int size;
    cout<<"Enter size of array:";
    cin>>size;

    vector<int>v(size);
    cout<<"Enter Elements:";
    for(int i=0;i<size;i++){
        cin>>v[i];
    }
    int x;
    cout<<"Enter X:";
    cin>>x;

    cout<<"Number of elements grater than "<<x<<" is : "<<Count(v,x);
}