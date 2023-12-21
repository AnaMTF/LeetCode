private int match(String s1, String s2, int i, int j) {
//If one of the string's pointer have reached the end of it
if (s1.length() == i) {
return s2.length() - j;
}
if (s2.length() == j) {
return s1.length() - i;
}
int res;
//If current poisition is the same.
if (s1.charAt(i) == s2.charAt(j)) {
res = match(s1, s2, i + 1, j + 1);
} else {
//Case1: insert
int insert = match(s1, s2, i, j + 1);
//Case2: delete
int delete = match(s1, s2, i + 1, j);
//Case3: replace
int replace = match(s1, s2, i + 1, j + 1);
res = Math.min(Math.min(insert, delete), replace) + 1;
}
return res;
}
}
​
This got TLE. based on the analysis above, we may try DP.