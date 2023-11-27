As an example, let's say the knight is currently on square 7 and we need to make 5 more jumps. How many ways can we finish these 5 jumps? We have two possibilities:
​
Jump to square 2. Now, we're on square 2 and need to make 4 more jumps.
Jump to square 6. Now, we're on square 6 and need to make 4 more jumps.
​
Both options create a similar subproblem - we still need to determine how many ways we can finish the jumps, we're just on a different square and have fewer jumps remaining. Let's define a function dp(remain, square). It will return the number of ways to finish remain jumps if we're currently on square.
​
The base case of this function is when remain = 0. We have finished the task, so we can just return 1.
​
Otherwise, we must calculate the value of dp(remain, square). Consider all squares that we could jump to from square (which we can find from the table above). For each nextSquare, jumping to nextSquare would yield dp(remain - 1, nextSquare) ways to finish the jumps. The answer to dp(remain, square) is the sum of all these options.
​
We will use a 2d array jumps to store the information from the table above, where jumps[square] contains all the nextSquare squares we could jump to from square.
​
So what is the answer to our original problem? The problem description states that we can place the knight on any starting square. Thus, we must consider all squares as the starting square. Given a starting square, we must make n - 1 jumps. This is because the starting square automatically contributes 1 toward our path of length n, and each jump will contribute 1 more. Thus, we need to make n - 1 jumps.
​
Overall, the answer to the problem is the sum of dp(n - 1, square) for all values of square in the range [0, 9].
​
Lastly, don't forget that we need to memoize our dp function. Many states of remain, square will overlap as each call to dp can create up to three more calls to dp. To avoid an exponential amount of repeated computation, we will cache the answer to each state. Before calculating a state remain, square, we will first check if we have already cached the value.
​
Algorithm
​
Note: to avoid integer overflow, all arithmetic should be done mod 109+7109+7.
​
Define an array jumps where jumps[square] contains a list of all squares that you can jump to from square.
Define a memoized function dp(remain, square):
If remain == 0, return 1.
Initialize ans = 0.
Iterate nextSquare over jumps[square]:
Add dp(remain - 1, nextSquare) to ans.
Return ans.
Initialize ans = 0.
Iterate square from 0 to 9:
Add dp(n - 1, square) to ans.
Return ans.
​