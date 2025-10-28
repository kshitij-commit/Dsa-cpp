// Print the given pattern.
// A B C D
// A B C D
// A B C D
// A B C D


#include <iostream>
using namespace std;

int main()
{
    int rows; 
    cout << "Enter number of rows:";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
            for (int j = 1; j<=rows; j++)
            {
                cout<<char(64+j)<<" ";
                
            }
            cout << endl;
        
    }
}