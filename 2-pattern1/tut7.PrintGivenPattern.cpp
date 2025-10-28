// Print the given pattern.
// 1
// 1 3
// 1 3 5
// 1 3 5 7

#include <iostream>
using namespace std;

int main()
{
    int rows; 
    cout << "Enter number of rows:";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
       
        
            for (int j = 1; j <i*2; j++)
            {
                if (j % 2 != 0)
                {
                    cout << j<<" ";
                }
            }
            cout << endl;
        
    }
}