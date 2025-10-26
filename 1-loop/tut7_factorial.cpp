// Print the Factorial of a given number:


#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;

    if(num < 0) {
        cout << "Factorial of negative numbers is not defined.";
        return 0;
    }

    long long fact=1;
    for(int i=1;i<=num;i++){
        fact*=i;

    }
    cout<<"Factorial of "<<num<<": "<<fact;
}