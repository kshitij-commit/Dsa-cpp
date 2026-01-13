#include<iostream>
using namespace std;

int product(int arr[], int n){
    int prod=1;
    for(int i=0;i<n;i++){
        prod*=arr[i];
    }
    return prod;
}
int main(){
    int size;
    cout<<"Enter size of array:";
    cin>>size;

    int arr[size];
    cout<<"Enter elements:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int res=product(arr,size);
    cout<<"Product of array is: "<<res;
}