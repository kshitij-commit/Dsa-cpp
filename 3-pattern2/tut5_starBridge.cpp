// print the given star Pyramid pattern 

// *******
// *** ***
// **   **
// *     *


#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter rows:";
    cin>>rows;
    for(int i=0;i<2*rows-1;i++){
        cout<<"*";
    }
    cout<<endl;

    int nsp=1;
    int nst=rows-1;
    for(int i=1;i<rows;i++){
        // left star
       for(int j=1;j<=nst;j++){
        cout<<"*";
        
       }
      // spaces
       for(int k=1;k<=nsp;k++){
        cout<<" ";
       }
      
    //     right stars
       for(int l=rows+i;l<=rows*2-1;l++){
            cout<<"*";
       }
       
        nsp+=2;
        nst--;
       cout<<endl;
    }
    return 0;
    
  
    
    
        
        
    
   
    
}