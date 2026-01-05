#include<iostream>
#include<vector>
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

int main(){
    vector<int>v={0, 1, 0, 3, 12};
   for(int i=0;i<v.size()-1;i++){
        if(v[i]==0){
            int temp=v[i];
            v[i]=v[i+1];
            v[i+1]=temp;

        }
            

   }
    for(int i:v){
        cout<<i<<" ";
    }
}