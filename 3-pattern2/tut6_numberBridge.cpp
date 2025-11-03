// print the given star Pyramid pattern 

// 1234567
// 123 567
// 12   67
// 1     7


#include<iostream>
using namespace std;



int main(){
    int rows;
    cout<<"Enter rows:";
    cin>>rows;

    for(int i=1;i<=rows*2-1;i++){
        cout<<i;
    }
    cout<<endl;
    int nsp=1;
    int nfn=rows-1;
    for(int i=1;i<rows;i++){

        for(int j=1;j<=nfn;j++){
            cout<<j;
        }
        nfn--;
        for(int i=1;i<=nsp;i++){
            cout<<" ";
        }
        for(int j=rows+i;j<=2*rows-1;j++){
            cout<<j;
        }
        nsp+=2;

        cout<<endl;


    }
   


    
}