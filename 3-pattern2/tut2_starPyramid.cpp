// print the given star Pyramid pattern 

//    *
//   ***
//  *****
// *******


#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter rows:";
    cin>>rows;


    int count=1;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows-i;j++){
            cout<<" ";
        }for(int k=1;k<=count;k++){
            cout<<"*";
            
        }
        count+=2;
        cout<<endl;

    }

   
    
}