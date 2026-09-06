#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solve(string s, string t, int i, int j,
          vector<vector<int>>& dp)
{
    // t completely formed
    if (j == t.size())
        return 1;

    // s khatam ho gaya, lekin t abhi baaki hai
    if (i == s.size())
        return 0;

    // Agar ye state pehle calculate ho chuki hai
    if (dp[i][j] != -1)
        return dp[i][j];

    if (s[i] == t[j])
    {
        int take = solve(s, t, i + 1, j + 1, dp);

        int skip = solve(s, t, i + 1, j, dp);

        dp[i][j] = take + skip;
    }
    else
    {
        dp[i][j] = solve(s, t, i + 1, j, dp);
    }

    return dp[i][j];
}

int main()
{
    string s = "baba";
    string t = "ba";

    vector<vector<int>> dp(
        s.size() + 1,
        vector<int>(t.size() + 1, -1)
    );

    cout << solve(s, t, 0, 0, dp);

    return 0;
}