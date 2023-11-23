// Given an array nums of positive integers, return the longest possible length of an array prefix of nums, such that it is possible to remove exactly one element from this prefix so that every number that has appeared in it will have the same number of occurrences.

// If after removing one element there are no remaining elements, it's still considered that every appeared number has the same number of ocurrences (0).
class Solution {
public:
        int maxEqualFreq(vector<int>& A) {
        vector<int> count(100001), freq(100001);
        int res = 0, N = A.size(), a,c,d;
        for (int n = 1; n <= N; ++n) {
            a = A[n - 1];
            --freq[count[a]];
            c = ++count[a];
            ++freq[count[a]];

            if (freq[c] * c == n && n < N)
                res = n + 1;
            d = n - freq[c] * c;
            if ((d == c + 1 || d == 1) && freq[d] == 1)
                res = n;
        }
        return res;
    }
};
