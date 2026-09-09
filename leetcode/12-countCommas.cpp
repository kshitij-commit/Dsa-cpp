#include <iostream>
using namespace std;

int count(int n)
{
     long long ans = 0;

      if(n >= 1000)
        return ans += n - 1000 + 1;

    return ans ;
       
}
int main()
{
    int n = 100003;
    cout << count(n);
}