// Given a string s, return the number of unique palindromes of length three that are a subsequence of s.

// Note that even if there are multiple ways to obtain the same subsequence, it is still only counted once.

// A palindrome is a string that reads the same forwards and backwards.

// A subsequence of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.

// For example, "ace" is a subsequence of "abcde".

class Solution {
    public int countPalindromicSubsequence(String s) {
        Set<Character> letters = new HashSet();
        for (Character c: s.toCharArray()){
            letters.add(c);
        }

        int ans = 0;
        for(Character letter : letters){
            int i = -1;
            int j = 0;
            for(int k = 0; k< s.length(); k++){
                if(s.charAt(k) == letter){
                    if(i==-1){
                        i = k;
                    }
                    j = k;
                }
            }
            Set<Character> between = new HashSet();

            for(int k=i+1; k<j;k++){
                between.add(s.charAt(k));
            }

            ans += between.size();
        }

        return ans;
    }
}
