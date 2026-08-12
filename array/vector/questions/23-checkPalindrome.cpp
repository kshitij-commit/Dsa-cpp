#include <iostream>
using namespace std;

bool palindrome(int arr[],int n)
{
    int i=0,j=n-1;

    while(i<j)
    {
        if(arr[i]!=arr[j])
            return false;

        i++;
        j--;
    }

    return true;
}

int main()
{
    int arr[]={1,2,3,2,1};

    cout<<(palindrome(arr,5)?"YES":"NO");
}