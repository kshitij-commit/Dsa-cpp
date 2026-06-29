#include<iostream>
using namespace std;


void isprime(int num){
    int flag = 0;
    if(num == 1){
        return;

    }
    else{
        for(int i = 2; i < num; i++){
            if ((num % i) == 0){
                flag = 1;
                break;
            }
        }
    }
    if(flag == 0){
        cout<<num<<" ";
    }

}

int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[size];

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    
    sizeof(arr);
    

    cout<<"Prime numbers are: ";
    
    

    for (int i = 0; i < size; i++){
        // cout<<arr[i];
        (isprime(arr[i]));
    }
}