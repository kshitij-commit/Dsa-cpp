#include<iostream>
#include<vector>
using namespace std;

void mergeInPlace(vector<int>& v1, vector<int>& v2,int m, int n){


    int i = m-1;
    int j = n-1;
    int k = m+n-1;

    while(i>=0 and j>=0){
        if(v1[i] > v2[j]){
            v1[k] = v1[i];
            k--;
            i--;
        }else{
            v1[k] = v2[j];
            j--;
            k--;
        }
    }
    while(j>=0){
        v1[k] = v2[j];
        k--;
        j--;
    }

}

int main(){
    int size1;
    cout<<"Enter size of vector1: ";
    cin>>size1;

    int size2;
    cout<<"Enter size of vector2: ";
    cin>>size2;

    vector<int> v1(size1);
    vector<int> v2(size2);

    

    int m;
    cout<<"Enter actual size   of first vector: ";
    cin>>m;

    int n;
    cout<<"Enter actual size of second vector: ";
    cin>>n;

    cout<<"Enter vector 1 elements: ";
    for(int i=0;i<v1.size();i++){
        cin>>v1[i];
    }
    cout<<"Enter vector 2 elements: ";
    for(int i=0;i<v2.size();i++){
        cin>>v2[i];
    }

    mergeInPlace(v1,v2,m,n);
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }


}