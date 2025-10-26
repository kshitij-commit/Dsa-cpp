// reverse a given number.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    if(num==0) {
        cout<<"Reversed number is :"<<num; 
        return 0;
    }
    int newNum=num;
    
    if(newNum<0) newNum*=-1;
    
    

    int reverseNum=0;
    while(newNum>0){
        int rem=newNum%10;
        reverseNum=reverseNum*10+rem;
        newNum=newNum/10;

    }
    if(num<0){
            cout<<"Reversed number is :"<<reverseNum*-1;
    }else
        cout<<"Reversed number is :"<<reverseNum;

}