#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int distinctSubseqII(string s) {
        
        const int MOD = 1e9 + 7;
        
        vector<long long> dp(26, 0);
        
        long long total = 0;
        
        for (char c : s) {
            int index = c - 'a';
            
            long long newSubseq = (total + 1) % MOD;
            
            total = (total + newSubseq - dp[index] + MOD) % MOD;
            
            dp[index] = newSubseq;
        }
        
        return total;
    }
};

int main() {
    Solution obj;
    
    string s = "abc";
    
    cout << obj.distinctSubseqII(s) << endl;
    
    return 0;
}