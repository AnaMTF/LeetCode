In this game, we pick three numbers at a time and gain score equal to the element with the middle value. Note that at the end:
​
scoreAlice+scoreBob+scoreUs=SUM(piles)scoreAlice•+scoreBob•+scoreUs•=SUM(piles)
​
Because the sum of piles is a constant for a given test case, we can maximize our score by minimizing the score of the other two players.
​
Let's think: at the start of the game, what are the most points we can gain with our first move? Is it possible for us to take the pile with the most coins?
​
No, it is impossible for us to ever take this pile. On any choice of piles that contains the maximum pile, the maximum pile will necessarily be the largest pile chosen, and thus will go to Alice.
​
Thus, the best we can do is to take the pile with the second most coins, after giving the pile with the most coins to Alice. Which pile should we choose for Bob? As mentioned above, we want to minimize scoreBobscoreBob•, so we will give Bob the smallest pile.
​
In our first choice, we removed the smallest pile and the two largest piles. This resulted in us gaining the maximum possible score while minimizing the score that Bob would gain and was an optimal first choice. What should we do for our second choice?
​
As every choice is independent of each other (except for the fact that we remove some piles), there is no reason for us to use a different strategy. Again, of the remaining piles, we should give Alice the largest pile, Bob the smallest pile, and take the second largest pile for ourselves.
​
The reason this greedy strategy works is because, at any given moment, it is impossible for us to ever claim the largest pile. In fact, this pile will always go to Alice. The largest pile we can claim is the second largest pile, but we can only accomplish this by giving Alice the largest pile. While increasing Alice's final score decreases our final score (from the equation above), Alice will inevitably obtain the largest pile anyway.
​
Since Alice will inevitably claim the largest pile regardless of our choices, we may as well use her to obtain the second-largest pile. This maximizes our own score. Then, we hand Bob the smallest pile to minimize his score. While unintuitive, this is also minimizing Alice's score (since she will take the largest pile regardless, but we take the second largest pile so that she can't later).
​
To implement this strategy, we will sort piles and then put the sorted piles into a double-ended queue (deque) queue. At each step, we pop from the back of queue and give the pile to Alice. Then we pop from the back again and take this pile for ourselves. Finally, we pop from the front of queue and give this pile to Bob. The above process will continue until we have emptied all the piles in queue.
​
Note that the problem only wants our score, so we don't need to track Alice's or Bob's score.
​
Algorithm
​
Sort piles.
Create a deque queue with the elements of piles.
Initialize the answer ans = 0.
While the queue is not empty:
Pop from the back of queue.
Pop from the back of queue and add the element to ans.
Pop from the front of queue.
Return ans.
​