#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[size];

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int max = arr[0];

    for(int i=0; i < size - 1; i++){
        if(arr[i+1] > max){
            max = arr[i+1];
        }
    }

    cout<<"Maximum element is : "<<max;

}