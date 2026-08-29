#include <iostream>
using namespace std;

int main()
{
    int row1;
    int col1;
    cout << "Enter first arrays rows and cols:";
    cin >> row1 >> col1;
    int row2;
    int col2;
    cout << "Enter second arrays rows and cols: ";
    cin >> row2 >> col2;

    int arr[row1][col1];
    int brr[row2][col2];

    int crr[row1][col2];
    {
    }

    if (col1 == row2)
    {
        // input for array 1.
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                cout << "Enter element at arr" << '[' << i << ']' << '[' << j << "]:";
                cin >> arr[i][j];
            }
        }
        // input for array 2.
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                cout << "Enter element at brr" << '[' << i << ']' << '[' << j << "]:";
                cin >> brr[i][j];
            }
        }
        // matrix multiplication.
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                crr[i][j] = 0;
                for (int k = 0; k < col1; k++)
                {
                    crr[i][j] += arr[i][k] * brr[k][j];
                }
            }
        }
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                cout << crr[i][j] << " ";
            }
            cout << endl;
        }
    }
    else{
        cout<<"Matrix multiplication is not possible.";
    }
}