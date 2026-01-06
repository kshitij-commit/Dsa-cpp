#include <iostream>
#include <vector>
using namespace std;
// Q3. Remove all zeros
// Input:
// [0, 1, 0, 3, 12]
// Output:
// [1, 3, 12, 0, 0]
// Rules:
// Order of non-zero elements must stay same
// In-place
// No extra vector
// 👉 This is a classic interview problem

int main()
{
    vector<int> v = {0, 1, 0, 3, 12};
    int j=0;
   for(int i=0;i<v.size();i++){
        if(v[i]!=0){
            v[j]=v[i];
            j++;
        }
   }
    while(j<v.size()){
        v[j]=0;
        j++;
    }

    for (int i : v)
    {
        cout << i << " ";
    }
}