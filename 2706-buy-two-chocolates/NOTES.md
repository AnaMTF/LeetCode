We need to buy exactly two chocolates. A collection of two is a pair.
​
Hence, we can check every pair of chocolates and select the pair with minimum cost.
​
We need to minimize the sum of the prices of the two chocolates we buy.
​
Initially, we will assume the minimum cost to be some very large integer, say infinity.
​
Then for every pair of chocolates, we will check if the sum of their prices is less than the minimum cost. If it is, then we will update the minimum cost to be the sum of their prices.
​
Note that pairs are commutative. That is, the order of chocolates in a pair does not matter. If we have two chocolates, a and b, then the pair (a, b) is the same as the pair (b, a), because the money spent on both pairs is the same, that is, a + b. The addition of two integers is commutative.
Algorithm
​
Initialize the minimum cost variable min_cost to be infinity or some very large integer, that is at least greater than the sum of the prices of any two chocolates.
​
On observing constraint 1 <= prices[i] <= 100, we can see that the sum of the prices of any two chocolates will be at most 200. Hence, 201 is also a good choice for initializing min_cost.
​
Save the number of chocolates in a variable n. It is equal to the length of the array prices. It is often a good practice to save the length of an array in a variable if it is used multiple times in the code.
​
Check every pair of chocolates using two nested loops.
​
Using the iterator variable first_choco, we will iterate over the array prices from 0 to n - 1.
​
Using the nested iterator variable second_choco, we will iterate over the array prices from first_choco + 1 to n - 1.
​
For every possible value of first_choco, we will check every possible value of second_choco.
​
For every pair of chocolates, we will calculate the sum of their prices and save it in a variable cost. It will be equal to prices[first_choco] + prices[second_choco].
​
If the sum of the prices of the two chocolates is less than the minimum cost, then we will update the minimum cost to be the sum of the prices of the two chocolates. The condition for this is cost < min_cost. On being true, we will assign min_cost to be cost, that is, min_cost = cost.
​
If the minimum cost is less than or equal to the amount of money we have, then we can buy two chocolates. In this case, we will return the amount of money left after buying two chocolates. It will be equal to money - min_cost. This we will return if min_cost <= money.
​
Otherwise, we cannot buy two chocolates. In this case, we will return the initial amount of money, that is, money.
​