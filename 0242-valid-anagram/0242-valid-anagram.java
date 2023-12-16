class Solution {
    public boolean isAnagram(String s, String t) {
        if(s.length()!=t.length())return false;
        int[] alpMap = new int[27];
        for(int i=0; i<s.length(); i++){
            alpMap[s.charAt(i)-'a']++;
            alpMap[t.charAt(i)-'a']--;
        }
        for(int n : alpMap){
            if(n!=0)return false;
        }
        return true;
    }
}