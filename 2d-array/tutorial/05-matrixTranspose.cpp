#include <iostream>
using namespace std;

int main()
{
    int row1;
    int col1;
    cout << "Enter first arrays rows and cols:";
    cin >> row1 >> col1;
    // array
    int arr[row1][col1];
    // array transpose
    int transpose[col1][row1];
    

    
        // input for array 1.
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                cout << "Enter element at arr" << '[' << i << ']' << '[' << j << "]:";
                cin >> arr[i][j];
            }
        }
       
        // matrix transpose.
        for (int i = 0; i < col1; i++)
        {
            for (int j = 0; j < row1; j++)
            {
                
                transpose[i][j] = arr[j][i];
            }
        }
        for (int i = 0; i < col1; i++)
        {
            for (int j = 0; j < row1; j++)
            {
                cout << transpose[i][j] << " ";
            }
            cout << endl;
        }
    
    
}