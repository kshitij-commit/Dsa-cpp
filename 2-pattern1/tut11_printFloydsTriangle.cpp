// Print given triangle(Floyds's triangle )
// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include <iostream>
using namespace std;

int main()
{
    int rows; 
    cout << "Enter number of rows:";
    cin >> rows;
    int count=1;
    for (int i = 1; i <= rows; i++)
    {
        
            for (int j = 1; j<=i; j++)
            { 
                 if(i>=j){
                    cout<<count<<" ";
                    count++;
                    
                 }
                
            }
            
            cout << endl; 
        
    }
}