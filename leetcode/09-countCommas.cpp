#include <iostream>
using namespace std;

int count(int n)
{
    int count = 0;
    int num = n;
    // digit = 0;

    // rem = n;
    while (num > 0)
    {
        count++;
        num = num / 10;
    }
    return count;

    for(int i = count;i>=0;i--){
        n
    }
}
int main()
{
    int n = 56857;
    cout << count(n);
}