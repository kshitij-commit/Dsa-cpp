#include<iostream>
using namespace std;


void findMax(int* a, int* b){

    if (*a > *b){
        cout<<"a is maximum: "<<*a;

    }else{
        cout<<"b is maximum: "<<*b;
    }

}

int main(){
    int arr[] = {1,20,3,4,5};

    int* ptr = &arr[0];
    *ptr;
    cout<<*ptr;
    ptr++;
    
    // for(int i=0;i<5;i++){
    //     *ptr++;
    //     ptr++; 
    // }
    // for(int i=0;i<5;i++){
    //     cout<<*ptr<<" ";
    // }
}