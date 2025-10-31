// print the given star Pyramid pattern 

//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *


#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter rows:";
    cin>>rows;

    int nsp=rows-1;
    int nst=1;
  for(int i=1;i<=2*rows-1;i++){
    for(int j=1;j<=nsp;j++){
        cout<<" ";
    }if(i<=rows-1){
        nsp--;
    }else nsp++;

    for(int k=1;k<=nst;k++){
        cout<<"*";
    }
    if(i<=rows-1){
        nst+=2;
    }else nst-=2;
    
    
    cout<<endl;
  }
    
  
    
    
        
        
    
   
    
}