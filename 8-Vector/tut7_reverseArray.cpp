#include <iostream>
#include <vector>
using namespace std;
// Q2. Reverse Array (In-place)
// Input:
// [10, 20, 30, 40, 50]
// Output:
// [50, 40, 30, 20, 10]
// Rules:
// No extra array
// Use two pointers

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    int *ptr1 = &v[0];
    int *ptr2 = &v.back();
    
   
    for(int i=0;i<(v.size()-1)/2;i++){
        int temp=*ptr1;
        *ptr1=*ptr2;
        *ptr2=temp;
        ptr1++;
        ptr2--;
    }
   
    for (int i : v)
    {
        cout << i << " ";
    }
}