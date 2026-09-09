#include <iostream>
using namespace std;

int count(int n)
{
     long long ans = 0;

        // 1 comma
        if (n >= 1000) {
            if (n < 1000000)
                ans += n - 1000 + 1;

            if (n >= 1000000)
                ans += 999999 - 1000 + 1;
        }

        // 2 commas
        if (n >= 1000000) {
            if (n < 1000000000)
                ans += (n - 1000000 + 1) * 2;

            if (n >= 1000000000)
                ans += (999999999 - 1000000 + 1) * 2;
        }

        // 3 commas
        if (n >= 1000000000) {
            if (n < 1000000000000LL)
                ans += (n - 1000000000 + 1) * 3;

            if (n >= 1000000000000LL)
                ans += (999999999999LL - 1000000000 + 1) * 3;
        }

        // 4 commas
        if (n >= 1000000000000LL) {
            if (n < 1000000000000000LL)
                ans += (n - 1000000000000LL + 1) * 4;

            if (n >= 1000000000000000LL)
                ans += (999999999999999LL - 1000000000000LL + 1) * 4;
        }

        // 5 commas
        if (n >= 1000000000000000LL)
            ans += 5;

        return ans;
}
int main()
{
    int n = 1004590;
    cout << count(n);
}