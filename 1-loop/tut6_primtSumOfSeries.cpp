// Print the sum of this series:
//   1-2+3-4+5-6+7-8... upto n

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter end number:";
    cin>>num;

    int sum=0;
    for(int i=1;i<=num;i++){
        if(i%2!=0){
            sum+=i;
        }else sum-=i;
    }

    cout<<"Sum is :"<<sum<<endl;
    cout<<"Normal time complexity is : O(n)";
    cout<<endl<<endl;

    cout<<"More optimised code are below:"<<endl;
    cout<<endl;
    cout<<"If  End Number is even then use: -n/2"<<endl;
    cout<<"If End Number is odd then use : (n+1)/2"<<endl;

    
    if(num%2==0){ 
        cout<<"Sum is :"<<-num/2;
    }else cout<<"Sum is :"<<(num+1)/2;
    cout<<endl;

    cout<<"optimised sum time complexity is : O(1)";
}