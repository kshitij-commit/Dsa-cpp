

#include<iostream>
using namespace std;

int main(){
    //    int a=5;
    //    int b=12;
    //    int* ptr1=&a;
    //    int* ptr2=&b;
    //    cout<<a<<"+"<<b<<"= "<<*ptr1+*ptr2<<endl;

     int x,y;
     int* ptr1=&x;
     int* ptr2=&y;

     cout<<"Enter first NUmber:";
     cin>>*ptr1;
     cout<<"Enter second NUmber:";
     cin>>*ptr2;

     cout<<*ptr1+*ptr2;
} 