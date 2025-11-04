#include<iostream>
using namespace std;


int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;

}

int main(){
    int num;
    cout<<"Enter first number number should be grater than r :";
    cin>>num;

    int r;
    cout<<"Enter second number:";
    cin>>r;

    int nfact=fact(num);        // num factorial
    int rfact=fact(r);         // r factorial
    int nMrfact=fact(num-r);  // n(num) minus r factorial

    int ncr=nfact/(rfact*nMrfact);

    cout<<"nCr of "<<num<<" and "<<r<<" is : "<<ncr;
    
   
    
    


}