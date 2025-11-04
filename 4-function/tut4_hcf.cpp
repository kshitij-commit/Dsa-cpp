

// find gcd of two numbers

#include<iostream>
using namespace std;

int gcd(int a, int b){
    int hcf=1;
    for(int i=2;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            hcf=i;
        }
    }
    return hcf;
}


int main(){
    int a;
    cout<<"enter first number:";
    cin>>a;

    int b;
    cout<<"ENter second number:";
    cin>>b;

    cout<<gcd(a,b);

    
}