// print sum of  digits of a given number.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    if(num<0) num*=-1;

    int rem=0;
    int sumDigit=0;
    int newNum=num;
    while(num>0){
        rem=num%10;
        num=num/10;
        sumDigit+=rem;

    }
    cout<<"sum of digit "<<newNum<<" : is "<<sumDigit;


}