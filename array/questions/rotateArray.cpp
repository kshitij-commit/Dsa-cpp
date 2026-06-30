#include<iostream>
using namespace std;


void rotation(int arr[],int size, int num_rotate ){
    for(int i=0; i<num_rotate; i++){

        for(int i = 0;i < size-1; i++){
            int temp = arr[size-1-i];
            arr[size-1-i] = arr[size-1-i-1];
            arr[size-1-i-1] = temp;
        }

    }
        


}

int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    int arr[size];

    cout<<"Enter array elements: ";

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int num_of_rotation;
    cout<<"Enter number of rotation: ";
    cin>>num_of_rotation;

    rotation(arr, size, num_of_rotation);
    // for(int i = 0;i < size-1; i++){
    //     int temp = arr[size-1-i];
    //     arr[size-1-i] = arr[size-1-i-1];
    //     arr[size-1-i-1] = temp;
    // }

    for(int i=0; i<size;i++){
        cout<<arr[i]<<" ";

    }
}