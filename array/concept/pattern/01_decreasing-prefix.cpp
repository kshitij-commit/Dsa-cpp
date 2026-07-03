#include<iostream>
using namespace std;


// 4 5 6 7 8 
// 4 5 6 7 
// 4 5 6 
// 4 5 
// 4 


int main(){
    int arr[] = {4,5,6,7,8};

    for(int i=0 ;i<5; i++){
        for(int j=0; j<5-i; j++){
                cout<<arr[j]<<" ";
        }
        cout<<"\n";
    }


}