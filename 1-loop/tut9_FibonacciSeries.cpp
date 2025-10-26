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

    int first = 0;
    int second = 1;
    int count = 0;

    while(count < num){
        cout << first << " ";
        int next = first + second;
        first = second;
        second = next;
        count++;
    }
}