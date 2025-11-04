//  Print pascals triangle 



#include<iostream>
using namespace std;


int fact(int n){
    int fact=1;
   for(int i=1;i<=n;i++ ){
        fact*=i;
   }
   return fact;

}
int combination(int n, int r ){
    return fact(n)/(fact(r)*fact(n-r));
}

int main(){
    int num;
    cout<<"Enter first number:" ;
    cin>>num;

   

    for(int i=0;i<=num;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || i==0 ){
                cout<<1<<" ";  
            }
            else cout<<combination(i,j)<<" ";
            
            
        }
        cout<<endl;
    }

   

   
   
}