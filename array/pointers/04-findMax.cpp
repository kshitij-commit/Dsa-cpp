#include<iostream>
using namespace std;


void findMax(int* a, int* b){

    if (*a > *b){
        cout<<"a is maximum: "<<*a;

    }else{
        cout<<"b is maximum: "<<*b;
    }

}

int main(){
    int a = 10;
    int b = 20;
    findMax(&a, &b);
}