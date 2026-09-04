#include<iostream>
using namespace std;


int matrixSum(int arr[][20],int row, int col){
    int sum = 0;
    for(int i = 0; i < row;i++){
        for(int j = 0;j < col;j++){
            sum += arr[i][j];
        }
    }
    return sum;
}

int main(){

    int row;
    cout<<"Enter number of rows: ";
    cin>>row;

    int col;
    cout<<"Enter number of col: ";
    cin>>col;

    int arr[20][20];
    cout<<"Enter array elements: ";
    for(int i = 0;i<row;i++){
        for(int j = 0; j<col;j++){
            cin>>arr[i][j];
        }
    }
    int sum = matrixSum(arr,row,col);
    cout<<sum;
    
}