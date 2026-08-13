#include <iostream>
using namespace std;

bool equal(int a[],int b[],int n)
{
    for(int i=0;i<n;i++)
        if(a[i]!=b[i])
            return false;

    return true;
}

int main()
{
    int a[]={1,2,3};
    int b[]={1,2,3};

    cout<<(equal(a,b,3)?"YES":"NO");
}