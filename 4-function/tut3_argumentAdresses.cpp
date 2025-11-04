



#include<iostream>
using namespace std;
int a=10;
void func(int x, int y){ // x, y are formal parameters
    cout<<&x<<endl;
    cout<<&y;

   }

void function(){
    cout<<a ;// local variable ;
}

int main(){
   
    int x=3;// scope variable 
    int y=7;
    cout<<&x;cout<<endl;
    cout<<&y<<endl;
    func(x,y);// x,y are actual parameters
   

    

   

   
   
}