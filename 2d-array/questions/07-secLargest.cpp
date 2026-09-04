#include<iostream>
using namespace std;
#include<climits>

int secLargest(int row, int col,int arr[][100]){
    
    int sec = INT_MIN;
    int max = INT_MIN;

    for(int i = 0;i < row;i++){
        for(int j = 0;j < col;j++){
            if(max < arr[i][j]){
                sec = max;
                max = arr[i][j];
            }if(arr[i][j] > sec and arr[i][j] != max){
                sec = arr[i][j];
            }

        }
    }
    return sec;


}

int main(){
    

    int row;
    cout<<"Enter number of rows: ";
    cin>>row;

    int col;
    cout<<"Enter number of col: ";
    cin>>col;

    int arr[100][100];

    cout<<"Enter array elements: ";
    for(int i = 0;i<row;i++){
        for(int j = 0; j<col;j++){
            cin>>arr[i][j];
        }
    }

    
    int res = secLargest(row,col,arr);
    cout<<res;
}