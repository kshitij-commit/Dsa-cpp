// swap two number by pass by value and pass by reference.

#include<iostream>
using namespace std;
void swapByValue(int a, int b){
    int temp=a;
    a=b;
    b=temp;
    cout<<"Inside swapByValue: x="<<a<<" y= "<<b;
}
void swapByReference(int* a, int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
    
}
void swapByRefeAlias(int &a, int &b){ // pass by refernece using alias
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int x,y;
    cout<<"Enter first number:";
    cin>>x;
    
    cout<<"Enter second number:";
    cin>>y;

    // cout<<"Before swapping: x= "<<x<<", y "<<y<<endl;
    // swapByValue(x,y);
    // cout<<"After swapByValue: x= "<<x<<" y="<<y<<endl;

    // swapByReference(&x,&y);
    // cout<<"After swapByReference: x="<<x<<" y"<<y<<endl;             // x and y values are already changed here so if you want to  further swap the values it will give you same values of x and y as same as initial values.

    // cout<<endl;

    swapByRefeAlias(x,y);
    cout<<"After swapByRefereAlias: x="<<x<<" y"<<y<<endl;  


    

    
}