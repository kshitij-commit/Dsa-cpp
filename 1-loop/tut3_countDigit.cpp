// count digit of a number

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    if(num<0){
        num*=-1;
    }

    int count=0;
    int newNum=num;
    while(num>0){
        count++;
        num=num/10;

    }
    if(newNum==0) cout<<1;
    else
    cout<<"count:"<<count;
}