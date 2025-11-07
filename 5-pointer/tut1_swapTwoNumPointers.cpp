// Swap Two numbers

#include<iostream>
using namespace std;



 void swap(int *a, int *b){
     *a=*a+*b;
     *b=*a-*b;
    *a=*a-*b;

    
 }

int main(){
    int firstNUm;
    cout<<"Enter first number:";
    cin>>firstNUm;

    int secondNum;
    cout<<"Enter second number:";
    cin>>secondNum;

    swap(&firstNUm, &secondNum);
    cout<<"firstNUm: "<<firstNUm<<",secondNUm: "<<secondNum; 

    

}