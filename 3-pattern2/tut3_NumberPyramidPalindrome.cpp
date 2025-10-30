// print the given star Pyramid pattern 

//    1
//   121
//  12321
// 1234321


#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter rows:";
    cin>>rows;


    
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows-i;j++){
            cout<<" ";
        }
        int count=i;
        for(int k=1;k<=2*i-1;k++){
            if(k>i){
                count--;
                cout<<count;
                
                
            }else cout<<k;
        }
        
        
        cout<<endl;

    }

   
    
}