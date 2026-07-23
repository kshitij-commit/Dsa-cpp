#include<iostream>
using namespace std;


void pointer(int* a){
    a[0] = 100;
    a[1] = 500;
    
}

int main(){
    int arr[] = {1,3,4,5,6};
    int* ptr = arr;
    // cout<<ptr[0]<<endl;
    // cout<<ptr[1]<<endl;
    // cout<<ptr[2]<<endl;
    pointer(arr);

    for(int i=0;i<5;i++){
        cout<<ptr[i]<<" ";
    }




}