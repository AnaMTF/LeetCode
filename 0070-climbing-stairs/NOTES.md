To calculate the number of ways to climb the stairs, we can observe that when we are on the nth stair,
we have two options:
​
either we climbed one stair from the (n-1)th stair or
we climbed two stairs from the (n-2)th stair.
​
By leveraging this observation, we can break down the problem into smaller subproblems and apply the concept of the Fibonacci series.
The base cases are when we are on the 1st stair (only one way to reach it) and the 2nd stair (two ways to reach it).
By summing up the number of ways to reach the (n-1)th and (n-2)th stairs, we can compute the total number of ways to climb the stairs. This allows us to solve the problem efficiently using various dynamic programming techniques such as recursion, memoization, tabulation, or space optimization.
​
Explanation: The space-optimized solution further reduces the space complexity by using only two variables (prev and curr) instead of an entire DP table. It initializes prev and curr to 1 since there is only one way to reach the base cases (0 and 1 steps). Then, in each iteration, it updates prev and curr by shifting their values. curr becomes the sum of the previous two values, and prev stores the previous value of curr.