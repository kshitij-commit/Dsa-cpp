#include<iostream>
using namespace std;
#include<vector>

void reverse(vector<int>&v){
    
    for(int i=0;i<v.size()/2;i++){
        int temp = v[i];
        v[i] = v[v.size()-1-i];
        v[v.size()-1-i] = temp;
    }
}

void rotateLeftPart(vector<int>&v , int start, int end){
    
    while(start<end){
        int temp = v[start];
        v[start] = v[end-1];
        v[end-1] = temp;
        start++;
        end--;
    }
}
void rotateRightPart(vector<int>&v, int start, int end){

    while(start<=end){
        int temp = v[start];
        v[start] = v[end];
        v[end] = temp;
        start++;
        end--;

    }
}

void rotateArray(vector<int>&v, int k){

    reverse(v);
    rotateLeftPart(v,0,k);
    rotateRightPart(v,k,v.size()-1);


}

int main(){
    int size;
    cout<<"Enter size of vector: ";
    cin>>size;
    if(size<1) return 0;

    vector<int>v(size);

    cout<<"Enter elements: ";
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    
    }

    int k;
    cout<<"Enter number of rotation: ";
    cin>>k;
    k = k%size;
    if (k > 0){
        rotateArray(v,k);

        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }

    }else
        for(int i=0;i<v.size();i++){
                cout<<v[i]<<" ";
            }

    

}