// Given a string s, return the number of homogenous substrings of s. Since the answer may be too large, return it modulo 109 + 7.

// A string is homogenous if all the characters of the string are the same.

// A substring is a contiguous sequence of characters within a string.

class Solution {
public:
    int countHomogenous(string s) {
        int ans = 0;
        int currStreak = 0;
        int MOD = pow(10, 9) +7;

        for (int i =0; i <s.size(); i++){
            if (i == 0 || s[i] == s[i - 1]) {
                currStreak++;
            } else {
                currStreak = 1;
            }

            ans = (ans + currStreak) % MOD;
        }
        return ans;
    }
};
