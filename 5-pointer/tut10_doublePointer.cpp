
#include<iostream>
using namespace std;



int main(){
    cout<<"DOUBLE POINTERS are used to \n store address of a single pointer";
    cout<<endl;
    int x=5;
    int* ptr=&x;
    int** ptr2=&ptr;
    cout<<x<<endl;
    cout<<*ptr<<endl;
    cout<<**ptr2<<endl;

    cout<<ptr<<endl;
    cout<<*ptr2<<endl;
    cout<<&x<<endl;


}