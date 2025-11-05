// find gcd of two numbers

#include<iostream>
using namespace std;

// int gcd(int a, int b){
//     int hcf=1;
//     for(int i=2;i<=min(a,b);i++){
//         if(a%i==0 && b%i==0){
//             hcf=i;
//         }
//     }
//     return hcf;
// }


// int gcd(int a, int b){
//     int hcf=1;
//     for(int i=min(a,b);i>=1;i--){
//         if(a%i==0 && b%i==0){
//             hcf=i;
//             break;
//         }
//     }
//     return hcf;
// }

int gcd_euclids(int a, int b){
    
    int divisor=min(a,b);
    int dividend=max(a,b);
   
    if(dividend==0 || divisor==0){
        return max(a,b);
    }

    while(divisor!=0){
        
        int remainder=dividend%divisor;
       
            dividend=divisor;
            divisor=remainder;
        

    }
    return dividend;
    
}

int main(){
    int a;
    cout<<"enter first number:";
    cin>>a;

    int b;
    cout<<"ENter second number:";
    cin>>b;

    cout<<gcd_euclids(a,b);

    
}