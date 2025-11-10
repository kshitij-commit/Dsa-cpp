// write a function to find out the first and last digit of a number without returning anything. 

#include<iostream>
using namespace std;


void func(int num, int &firstDigit, int &lastDigit){

    lastDigit=num%10;
    
    
    while(num>9){
        num=num/10;
        
    }
    firstDigit=num;

    return;
}

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;

    int firstDigit, lastDigit;
    // int* ptr1= &firstDigit;
    // int* ptr2= &lastDigit; 

    func(n,firstDigit, lastDigit);
    cout<<"firstDigit:"<<firstDigit<<" "<<"lastDigit:"<<lastDigit<<endl;

}