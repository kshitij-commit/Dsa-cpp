#include<iostream>
using namespace std;


int main(){
    int row;
    int col;
    cout<<"Enter number of rows and columns: ";
    cin>>row>>col;

    int arr[row][col];
//    cout<<"Enter array elements";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"Enter element at arr"<<'['<<i<<']'<<'['<<j<<"]:";
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}