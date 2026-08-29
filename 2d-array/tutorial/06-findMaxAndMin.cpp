#include<iostream>
using namespace std;
#include<math.h>
#include<climits>

int main(){
    int row;
    int col;
    cout<<"Enter number of row and col: ";
    cin>>row>>col;

    int arr[row][col];  
    cout<<"Enter array elements: ";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    int min = INT_MAX;
    int max = INT_MIN;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j] < min)
                min = arr[i][j];
            if(arr[i][j] > max) 
                max = arr[i][j];
        }
    }

    cout<<"Min: "<<min<<endl;
    cout<<"Max: "<<max<<endl;


}