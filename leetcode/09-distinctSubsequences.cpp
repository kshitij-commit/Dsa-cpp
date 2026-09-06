

// 115. Distinct Subsequences

// Given two strings s and t, return the number of distinct subsequences of s which equals t.

// The test cases are generated so that the answer fits on a 32-bit signed integer.

 

// Example 1:

// Input: s = "rabbbit", t = "rabbit"
// Output: 3
// Explanation:
// As shown below, there are 3 ways you can generate "rabbit" from s.
// rabbbit
// rabbbit
// rabbbit
// Example 2:

// Input: s = "babgbag", t = "bag"
// Output: 5
// Explanation:
// As shown below, there are 5 ways you can generate "bag" from s.
// babgbag
// babgbag
// babgbag
// babgbag
// babgbag
 

// Constraints:

// 1 <= s.length, t.length <= 1000
// s and t consist of English letters.




#include <iostream>
#include <string>
using namespace std;

int solve(string s, string t, int i, int j)
{
    if (j == t.size())
        return 1;

    if (i == s.size())
        return 0;

    if (s[i] == t[j])
    {
        int take = solve(s, t, i + 1, j + 1);
        int skip = solve(s, t, i + 1, j);

        return take + skip;
    }
    else
    {
        return solve(s, t, i + 1, j);
    }
}

int main()
{
    string s = "baba";
    string t = "ba";

    cout << solve(s, t, 0, 0);

    return 0;
}