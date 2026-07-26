#include<iostream>
using namespace std;
#include<vector>


int findLastOccurence(vector<int> v, int target){
    // int indx = -1;
    bool flag = false;
    for(int i = v.size()-1;i>=0;i--){
        if(target == v[i]){
            return i;
            flag = true;
        }
    }

    if(flag == false){
        
        return -1;
    }
}


int main(){
    int size;
    cout<<"Enter vector size: ";
    cin>>size;

    vector<int>v(size);

    cout<<"Enter vector elements: ";
    
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    // cout<<v.size();

    int target;
    cout<<"Enter target element: ";
    cin>>target;

    int res = findLastOccurence(v, target);

    if(res == -1){
        cout<<"Element not present.";
    }else{
        cout<<res;
    }
    

}