#include<iostream>
#include<vector>
using namespace std;

//  Reverse part of array


void reversePart(vector<int> &v, int start_idx, int end_idx){
    
    while(start_idx<=end_idx){
        int temp = v[start_idx];
        v[start_idx] = v[end_idx];
        v[end_idx] = temp;
        start_idx++;
        end_idx--;
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
    int start_idx;
    int end_idx;

    cout<<"Enter start index: ";
    cin>>start_idx;

    cout<<"Enter ending index: ";
    cin>>end_idx;
    if(start_idx <= size  && end_idx<=size){
        reversePart(v,start_idx,end_idx);
    
        cout<<"v vector: ";
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;

    }else{
        cout<<"Invalid index.";
    }

    
   


}