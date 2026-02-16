
//Linear search
// FInd the element x in the array. take array and x as input.




#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter No Of Array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int x;
    cout<<"Enter element to seacrh:";
    cin>>x;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout<<"Element is present in position:"<<i;
            flag=true;
            break;
        }
    }
    if(flag==false){
        cout<<"Element not present.";
    }

    
}
