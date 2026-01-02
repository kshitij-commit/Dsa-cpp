
// Find the maximum value out of all the elements in the array.



#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter no of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max=arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Maximum element is:"<<max;
    
}