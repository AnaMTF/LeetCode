The problem description describes what happens at each round:
​
If n is even, n / 2 matches are played and n / 2 teams play next round.
If n is odd, (n - 1) / 2 matches are played and (n - 1) / 2 + 1 teams play next round.
​
We can simply simulate the tournament according to the rules. We create a while loop that runs until n = 1.
​
At each iteration, we check if n is even or odd. If n % 2 = 0, then n is even. Otherwise, n % 2 = 1 and n is odd. Here, % is the modulus operator.
​
If n is even, we add n / 2 to our answer and set n = n / 2.
​
If n is odd, we add (n - 1) / 2 to our answer and set n = (n - 1) / 2 + 1.
​
Algorithm
​
Initialize the answer ans = 0.
While n > 1:
If n % 2 == 0:
Add n / 2 to ans.
Set n to n / 2.
Else:
Add (n - 1) / 2 to ans.
Set n to (n - 1) / 2 + 1.
Return ans.
​