​
We iterate over the input matrix and keep track of how many consecutive ones each column has seen. To do this, for a given row, col, we first check if matrix[row][col] != 0. If so, we add the value of matrix[row - 1][col] to it. If matrix[row][col] = 0, we do nothing, which effectively resets the streak for the current column since the next iteration at matrix[row + 1][col] will reference matrix[row][col], which is 0. If we have a streak, then matrix[row][col] will continually increase by 1 for each row.
​
Once we have finished updating a row, we sort it descending and iterate over it to find the largest submatrix we can make if we treat the current row as the bottom of the submatrix. For a sorted currRow, we treat currRow[i] as the height and i + 1 as the base. The reason we are allowed to sort each row is because sorting each row is equivalent to rearranging the columns, which we are allowed to do freely.
​
Algorithm
​
Initialize m = matrix.length, n = matrix[0].length, and the answer ans = 0.
Iterate row from 0 to m:
Iterate col from 0 to n:
If matrix[row][col] != 0 and row > 0:
Add matrix[row - 1][col] to matrix[row][col].
Create a copy of matrix[row] as currRow, then sort currRow in descending order.
Iterate i over the indiecs of currRow:
Update ans with currRow[i] * (i + 1) if it is larger.
Return ans.
​
Implementation
​
Note that in Java, we can't conveniently sort int[] in descending order, so we sort it in ascending order and consider the base to the right of each column instead. For each column i, every column to its right has a height greater than or equal to the current height. Thus, we can treat the number of columns n - i as the base to form a submatrix with the current height.
​