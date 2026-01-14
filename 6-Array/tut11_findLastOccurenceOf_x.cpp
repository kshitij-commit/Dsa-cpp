#include<iostream>
#include<vector>
using namespace std;

int main(){
    int size;
    cout<<"Enter size of vector:";
    cin>>size;

    vector<int>v(size);
    cout<<"Enter elements:";
    for(int i=0;i<size;i++){
        cin>>v[i];
    }

    int x;
    cout<<"Enter x:";
    cin>>x;

    for(int i=size;i>0;i--){
        if(v[i]==x){
            cout<<i;
            break;
        }
        
    }

}