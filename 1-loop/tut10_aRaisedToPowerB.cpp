// Two number are entered through the keyboard.
//  Write a program to find the value of one number raised to the power of another.

#include<iostream>
using namespace std;

int main(){
    int firstNum;
    cout<<"Enter first number:";
    cin>>firstNum;

    int secNum;
    cout<<"Enter second number:";
    cin>>secNum;
    if(firstNum==0 && secNum==0){
        cout<<0;
        return 0;
    }
    else if(firstNum==0){
        cout<<0;
        return 0;
    }else if (secNum==0){
        cout<<1;
        return 0;
    }
    

    int result=firstNum;
    for(int i=1;i<secNum;i++){
        result*=firstNum;
    }
    cout << firstNum << "^" << secNum << " = " << result << endl;
    return 0;


}
