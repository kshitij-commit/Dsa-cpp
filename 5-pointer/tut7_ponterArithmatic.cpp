#include<iostream>
using namespace std;

int main(){
    // int x=7;
    // int* ptr=&x;
    // cout<<ptr<<endl;
    //  ptr+=1;
    //  cout<<ptr<<endl;
    // cout<<*ptr<<endl;  // garbage value 
    // (*ptr)++;   // avoid *ptr++


    // cout<<endl;
    //  bool a;
    //  bool* ptr2=&a;
    //  cout<<ptr2<<endl;
    //  ptr2+=1;
    //  cout<<ptr2<<endl;


    int a=15;
    int* ptr=&a;
    // int b=a++;
    // int b=(*ptr)++;
    int b= ++(*ptr);
    cout<<a<<" "<<b;


}