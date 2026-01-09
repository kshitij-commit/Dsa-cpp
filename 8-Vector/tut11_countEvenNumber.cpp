// Example
// Input:  [1, 2, 3, 4, 6]
// Output: 3

#include<iostream>
#include<vector>
using namespace std;
int evenCount(vector<int>v){
    int count=0;
    for(int i=0;i<v.size();i++){
        if(v[i]%2==0){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter size of vector:";
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<evenCount(v);
}