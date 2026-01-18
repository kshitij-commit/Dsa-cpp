#include<iostream>
#include<vector>
using namespace std;

int main(){
    int size;
    cout<<"Enter size of array:";
    cin>>size;

    vector<int>v(size);
    for(int i=0;i<size;i++){
        cin>>v[i];
    }
    bool flag=false;
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(v[i]==v[j]){
                cout<<"Array contains duplicate element:"<<v[i];
                flag=true;
                break;
            }
            
        }
        if(flag==true)
            break;
    }
    if(flag==false){
        cout<<"Array doesn't contain duplicate element. ";
    }
}