

// Count the number of element in given array greater than a given number x.


#include<iostream>
using namespace std;
#include<vector>

int countGreater(vector<float>& arr,int size, int num){
    int sum = 0;

    for(int i=0;i<size;i++){
        if(arr[i]>num){
            sum++;
        }
    }
    return sum;

}


int main(){
    int size;
    cout<<"Enter array size: ";
    cin >> size;

    vector<float> arr(size);
    

    if(size > 0){

        cout<<"Enter array elements:";
        for (int i = 0; i < size; i++)
            cin >> arr[i];
    }

    float num;
    cout<<"Enter your number: ";
    cin>>num;

    int res = countGreater(arr,size,num);

    cout<<res<<" numbers are greater then "<<num;
    
    return 0;
    
}