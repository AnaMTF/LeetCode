Approach 1: Brute Force
​
Intuition
​
For our first approach, we will apply a brute force search for each square in mat.
​
We iterate over every square (row, col) in mat. For each (row, col), we first check if mat[row][col] = 1. If it is, then it could possibly be a special position. Next, we check if there are any squares with the same row or same col that have a value of 1. If there are, then the current square (row, col) is not special, otherwise, (row, col) is special.
​
To perform this check, we initialize a boolean flag good = true indicating that the current square is special. We then iterate over each row in the mat using another variable r. For each value of r other than row, we check if mat[r][col] = 1. If it is, it means that there is another cell with value 1 in the same column, so the current square is not special, and we set good = false.
​
Then, we do the same for the columns with a variable c. For each value of c other than col, we check if mat[row][c] = 1. If it is, we set good = false.
​
example
​
After checking the rows and columns, if good is still true, then the current square is special. We can increment our answer.
​
Algorithm
​
Set the answer ans = 0, and the size of the matrix m = mat.length, n = mat[0].length.
Iterate row from 0 until m:
Iterate col from 0 until n:
If mat[row][col] = 0, continue to the next iteration.
Set good = true.
Iterate r from 0 until m:
If r != row and mat[r][col] = 1, set good = false and break from the loop.
Iterate c from 0 until n:
If c != col and mat[row][c] = 1, set good = false and break from the loop.
If good = true, increment ans.
Return ans.
​