

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

   int sum=0;
   for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        sum+=arr[i];
   }
   cout<<"The sum of array is :"<<sum;
}
