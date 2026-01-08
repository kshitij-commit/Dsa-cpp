#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // initialise vector type 1
        // vector<int> vec; // vector of size 0
        // cout << vec[0];
    // initialise vector type 2
        // vector<int> vec={1,2,3}; // size 3
        // cout << vec[0] <<" ";
        // cout << vec[1] <<" ";
        // cout << vec[2];

    // initialise vector type 3
        // vector<int> vec(5,1);  // 5-> size, 1-> per index value
        // cout<<vec[0]<<endl;
        // cout<<vec[1]<<endl;
        // cout<<vec[2]<<endl;
        // cout<<vec[3]<<endl;
        // cout<<vec[4]<<endl;
    
    // looping in vector
    vector<char> vec={'a','b','c','d','e'};
    for(char i: vec){
        cout<<i<<" ";
    }
      
}