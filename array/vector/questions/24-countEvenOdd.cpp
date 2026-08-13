#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6};

    int even=0,odd=0;

    for(int x:arr)
    {
        if(x%2==0)
            even++;
        else
            odd++;
    }

    cout<<"Even = "<<even<<endl;
    cout<<"Odd = "<<odd;
}