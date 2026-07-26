#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main(){
    vector<int> v;

    v.push_back(3);
    v.push_back(10);
    v.push_back(70);
    v.push_back(10);

    // cout<<v.at(1)<<endl;
    // cout<<v.at(3)<<endl;

    sort(v.begin(), v.end());
    for(int i = 0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
}