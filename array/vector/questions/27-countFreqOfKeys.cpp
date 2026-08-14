#include <iostream>
using namespace std;

int frequency(int arr[],int n,int key)
{
    int cnt=0;

    for(int i=0;i<n;i++)
        if(arr[i]==key)
            cnt++;

    return cnt;
}

int main()
{
    int arr[]={1,2,2,3,2,5};

    cout<<frequency(arr,6,2);
}