To build the matrix diff, we need to have the count of ones and zeroes in each row and column of the given matrix grid. One way is that for each cell (i, j) in the matrix grid, we can iterate over the ith row and jth column to find the number of ones and zeroes, and set the value diff[i][j] as onesRowionesRowi• + onesColjonesColj• - zerosRowizerosRowi• - zerosColjzerosColj•. However, this approach is inefficient, as for each of the M⋅NM⋅N cells, we will have to iterate over a row and a column of M+NM+N cells to count the number of zeroes and ones, resulting in a complexity of O(M⋅N⋅(M+N))O(M⋅N⋅(M+N)).
​
Note that in the above approach, we are iterating over the cells repeatedly. However, when we iterate over the ith row to find the number of ones, we can also find the add the number of ones/zeroes for all the columns in that row. Therefore, we could avoid repeated iteration by precomputing the number of ones and zeroes in each row and column.
​
We will keep two arrays onesRow of size M to store the count of ones in each row and onesCol of size N to store the ones in each column. We will then iterate over each cell in the matrix grid and for each cell, we add the value grid[i][j] to onesRow[i] and onesCol[j]. This is because matrices are binary, and adding grid[i][j] essentially increases the number of ones. Specifically, if grid[i][j] = 1, adding grid[i][j] means increasing the number of ones. If grid[i][j] = 0, we can still add grid[i][j], since it means adding 0 so we are not increasing the number of ones.
​
Note that we don't need to build another two arrays to store the counts of zeroes, this is because the length of each row and column is fixed, and we can get the number of zeroes by subtracting the number of ones from the length of a row/column.
​
So the value expression for diff[i] will be:
​
diff[i][j] = onesRow[i] + onesCol[j] - (N - onesRow[i]) - (M - onesCol[j])
= 2 * onesRow[i] + 2 * onesCol[j] - N - M
​
Algorithm
​
Initialize two arrays onesRow and onesCol of size M and N with zeroes.
Iterate over the cells in the matrix grid and add the value grid[i][j] to onesRow[i] and onesCol[j].
Initialize an empty matrix matrix diff with size M * N.
Iterate over the matrix grid and assign diff[i][j] as 2 * onesRow[i] + 2 * onesCol[j] - N - M.
Return diff.
​