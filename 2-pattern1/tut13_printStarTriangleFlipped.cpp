// print the  given pattern
// for n=4
 
//    *
//   **
//  ***
// ****
 

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
        
            for (int j = 1; j<=rows; j++)
            { 
                if(i+j>=rows+1){
                    cout<<"*";
                }else cout<<"_";
                
            }
            
            cout << endl; 
        
    }
}
