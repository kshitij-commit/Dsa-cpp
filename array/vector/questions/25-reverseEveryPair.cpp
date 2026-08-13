#include <iostream>
using namespace std;

void pairReverse(int arr[],int n)
{
    for(int i=0;i<n-1;i+=2)
        swap(arr[i],arr[i+1]);
}

int main()
{
    int arr[]={1,2,3,4,5,6};

    pairReverse(arr,6);

    for(int x:arr)
        cout<<x<<" ";
}