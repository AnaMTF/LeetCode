Intuition:
​
To find the highest altitude, we need to calculate the cumulative sum of the altitude gains at each step. Starting from the initial altitude of 0, we keep adding the gain at each step to the current altitude. The highest altitude reached during this process is the answer we are looking for.
​
Approach:
​
Initialize two variables: maxAltitude and currentAltitude to keep track of the maximum altitude encountered so far and the current altitude, respectively. Set both variables to 0.
Iterate over the gain vector, starting from the first element.
At each step, update the currentAltitude by adding the gain of the current step.
Compare the currentAltitude with the maxAltitude. If it is greater, update maxAltitude to the new value.
Repeat steps 3-4 for all elements in the gain vector.
Once the iteration is complete, maxAltitude will hold the highest altitude reached.
Return the value of maxAltitude as the result.
​
This approach ensures that we keep track of the maximum altitude encountered during the traversal and avoids unnecessary modifications to the input vector. By iterating over the gain vector only once, the solution is efficient and provides the correct result.