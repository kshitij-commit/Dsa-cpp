#include<iostream>
using namespace std;



int missing(int arr[], int size, int n){
    long long sum = 0;

    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    long long res = n*(n+1)/2;

    return int(res - sum);

}
int main(){

    int n;
    cout<<"Enter total size: ";
    cin>>n;

    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    int arr[size];

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    int res = missing(arr, size, n);
    cout<<res;



}

