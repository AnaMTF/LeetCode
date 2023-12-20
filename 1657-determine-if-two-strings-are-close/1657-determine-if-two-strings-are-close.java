class Solution {
    public boolean check(String s1, String s2){
        // creating a frequency array to keep track of the character count 
        int[] freq1 = new int[26];
        int[] freq2 = new int[26];
        
        // iterating over the length of strings
        for(int i=0;i<s1.length();i++) freq1[s1.charAt(i)-'a']++;
        for(int i=0;i<s2.length();i++) freq2[s2.charAt(i)-'a']++;
        
        // The same character with the same count is present in both arrays if they are equal.
        if(Arrays.equals(freq2, freq1)){
            return true;
        }
        
        // determining whether the two strings contain entirely unique characters
        for(int i=0;i<26;i++){
            if((freq1[i]==0 && freq2[i]!=0) || (freq2[i]==0 && freq1[i]!=0)){
                return false;
            }
        }
        // sorting the arrays
        Arrays.sort(freq1);
        Arrays.sort(freq2);
        
        // If arrays are equal, it means that we have the same number of characters, so we will return true.
        if(Arrays.equals(freq2, freq1)) return true;
        
        // both the strings are not close
        return false;
    }
    public boolean closeStrings(String word1, String word2) {
        // if the length are not equal simply return false
        if(word1.length()!=word2.length()){
            return false;
        }
        return check(word1, word2);
    }
}