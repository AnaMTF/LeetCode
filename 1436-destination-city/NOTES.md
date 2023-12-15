Each element in paths can be represented as two cities [a, b]. It indicates that we leave a and go to b.
​
The destination city is the city that does not appear as a (the first element) in any of the paths. The destination city would appear as b for one path.
​
We will check every city individually. For each index i, we let candidate = paths[i][1].
​
For this candidate, we then iterate over each path in paths with a nested loop and check if path[0] = candidate. If we find ANY path with path[0] = candidate, we know the current candidate cannot be the destination city since there is a path starting with candidate.
​
We continue for each index i until we eventually find the destination city, as it is guaranteed that a destination city exists. Essentially, we are searching for the city that does not appear as the first element in any path.
​
To implement this check, we will initialize a boolean flag good = true at the beginning of each iteration. If we find that path[0] = candidate for any path, we set good = false and break from the inner loop. At the end of the inner loop, we check if good = true. If it is, then candidate is the destination city.
​
Algorithm
​
Iterate i over the indices of paths:
Set candidate = paths[i][1] and a boolean flag good = true.
Iterate j over the indices of paths:
If paths[j][0] == candidate, set good = false and break from the loop.
If good = true, return candidate.
The code should never reach this point. Return anything.
​