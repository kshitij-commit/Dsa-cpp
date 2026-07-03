#include<iostream>
using namespace std;



// 1 2 3 4 5
// 2 3 4 5
// 3 4 5
// 4 5
// 5

int main(){
    
    int arr[] = {3,13,12,7,4};

    for(int i=0 ;i<5; i++){
        for(int j=i; j<5; j++){
                cout<<arr[j]<<" ";
        }
        cout<<"\n";
    }
}