

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter number of students:";
    cin>>n;
    int arr[n];
    cout<<"Enter marks:";
    for(int i=0;i<n;i++){

        cin>>arr[i];
    }
   
    
    for(int i=0;i<10;i++){
        if(arr[i]<35){
            cout<<i<<endl;;
        }
    }
}