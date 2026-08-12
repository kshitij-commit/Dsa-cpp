#include <iostream>
using namespace std;

int search(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
        if(arr[i]==key)
            return i;

    return -1;
}

int main()
{
    int arr[]={5,9,2,7,3};

    cout<<search(arr,5,7);
}
