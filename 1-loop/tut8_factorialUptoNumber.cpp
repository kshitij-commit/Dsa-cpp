// Print factorial upton given number:
// ex: num=5
//     1!=1
//     2!=2
//     3!=6
//     4!=24
//     5!=120

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;

    if(num < 0){
        cout<<"Factorial not defined for negative numbers.";
        return 0;
    }

    int start=1;
    long long fact=1;
    while(start<=num){
        
        fact=fact*start;
        cout<<"Factorial of "<<start<<":"<<fact<<endl;
        start++;
        
    }
}