//  Print given pattern(binary Tracking).
// 1
// 0 1
// 1 0 1
// 0 1 0 1



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
                 if((i+j)%2==0){
                    cout<<1<<" ";
                 }else cout<<0<<" ";
                
            }
            
            cout << endl; 
        
    }
}