#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int* ptr = arr;
    // int* ptr = &arr[0];

    cout<<ptr<<endl;
    cout<<&arr[0]<<endl;

    cout<<ptr[1]<<endl;

    for(int i=0; i<5;i++){
        cout<<ptr[i]<<" ";
    }
    return 0;


}