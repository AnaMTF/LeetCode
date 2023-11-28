We precompute the greatest number of candies that any kid(s) has, let's call it maxCandies.
​
Following the precomputation, we iterate over candies, checking whether the total candies that the current kid has exceeds maxCandies after giving extraCandies to the kid. For every kid, we perform candies[i] + extraCandies >= maxCandies and push it into a boolean list called result.
​
In the end, we return result.
​
Algorithm
​
Create an integer variable called maxCandies to store the greatest number of candies in candies. We initialize it with 0.
We iterate over candies and for each kid who has candy candies, we perform maxCandies = max(maxCandies, candy) to get the greatest number of candies in candies.
Create a boolean list answer.
We iterate over candies once more, and for each kid who has candy candies, we add candy + extraCandies >= maxCandies to answer.
Return answer.
​