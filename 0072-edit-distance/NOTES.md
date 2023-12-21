int[][] matched = new int[c1.length + 1][c2.length + 1];
//matched[length of c1 already been matched][length of c2 already been matched]
for (int i = 0; i <= c1.length; i++) {
matched[i][0] = i;
}
for (int j = 0; j <= c2.length; j++) {
matched[0][j] = j;
}
for (int i = 0; i < c1.length; i++) {
for (int j = 0; j < c2.length; j++) {
if (c1[i] == c2[j]) {
matched[i + 1][j + 1] = matched[i][j];
} else {
matched[i + 1][j + 1] = Math.min(Math.min(matched[i][j + 1], matched[i + 1][j]), matched[i][j]) + 1;
//Since it is bottom up, we are considering in the ascending order of indexes.
//Insert means plus 1 to j, delete means plus 1 to i, replace means plus 1 to both i and j.
//above sequence is delete, insert and replace.
}
}
}
return matched[c1.length][c2.length];
}