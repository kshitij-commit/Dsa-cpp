#include<iostream>
using namespace std;

int main(){
    int arr[3];

    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;


    cout<<arr<<endl;  // arr and &arr[0] both prints address of first index of the array.
    cout<<&arr[0];
}