//  Print fibonacchi series upto n:


#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a Number:";
    cin>>num;
    if(num <= 0){
        cout << "Invalid input!";
        return 0;
    }

    int first=0;
    int sec=0;
    int third=1;
    
    int count=0;
    while(count<num){
        count++;
        cout<<first<<" ";
        sec=third;
        third=first+sec;
        first=sec;
        
    }

}