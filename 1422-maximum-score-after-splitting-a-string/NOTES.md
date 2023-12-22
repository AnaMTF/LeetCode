n this problem, we need to make a "split" which involves separating the input into a left part and a right part.
​
To start, we can check every possible split. We will use an integer i to iterate over the string, where i represents the index of the final character in the left part.
​
For a given i, we iterate on the indices of s from 0 to i and count how many times 0 occurs. We then iterate on the indices from i + 1 until the last index and count how many times 1 occurs. The sum of these counts represents the score for the current split, and we take the maximum of all scores.
​
Note that we cannot iterate i until the final index, but rather the second last index. If we were to iterate to the final index, the right part would be empty, which is not allowed by the problem.
​
Algorithm
​
Initialize the answer ans = 0.
Iterate i from 0 until s.length - 1:
Initialize the current score curr = 0.
Iterate j from 0 to i:
If s[j] == '0', increment curr.
Iterate j from i + 1 until s.length:
If s[j] == '1', increment curr.
Update ans with curr if it is larger.
Return ans.
​