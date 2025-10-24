// check whether the number is prime or composite .

#include<iostream>
using namespace std;
#include<cmath>

int main(){
    int num;
    cout<<"Enter number:";
    cin>>num;

    bool iscomp=false;
    if(num==1){
        cout<<num<<" is not prime nor  composite";
        return 0;
    }else
    {

        for(int i=2;i<=sqrt(num);i++){
        
        if(num%i==0){
            iscomp=true;
            break;
            
        }
            
    }
    if(iscomp){
        cout<<num<<" is composite";
    }else{
        cout<<num<<" is prime";
    }
    }
    

}