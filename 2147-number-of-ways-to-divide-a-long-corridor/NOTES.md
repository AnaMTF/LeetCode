Store 1000000007 in the variable MOD for convenience. It is a good practice to store constants.
​
Initialize a two-dimensional array cache of size n rows and 3 columns. Initialize each element of the array to -1. We will use this array to cache the result of each sub-problem. Alternatively, we can use a hash map to cache the result of each sub-problem.
​
Define a function count which takes two arguments index and seats. It can have other arguments as well to access the required variables.
​
If index is equal to n, then the current section is valid only if seats is equal to 2. Thus, return 1 if seats == 2, otherwise return 0.
​
If cache[index][seats] is not equal to -1, then return cache[index][seats]. This implies that we have already computed the result of this sub-problem, and we can return the cached result.
​
If the current section has seats == 2
If corridor[index] is S, then we have to close the section and start a new section from this index. Thus, return count(index + 1, 1)
If corridor[index] is P, then we have the option to close or to keep growing the section. Thus, return (count(index + 1, 0) + count(index + 1, 2)) % MOD
​
If the current section has seats < 2, then we have to keep growing the section.
If corridor[index] is S, then return count(index + 1, seats + 1)
If corridor[index] is P, then return count(index + 1, seats)
​
Call the function count with index = 0 and seats = 0. Return the result of the function call.
​