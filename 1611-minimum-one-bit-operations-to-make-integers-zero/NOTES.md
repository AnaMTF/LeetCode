Before we continue, we must talk about another critical observation.
​
Both operations are reversible. Because each of the two operations flips only one bit, if we can transform a into b with a single operation O1, it means we can reverse the process by applying the same type of operation to b flipping the same bit, to get back to a.
​
To sum up, the minimum number of operations for converting x to y for arbitrary x, y is always the same as the minimum number of operations for converting y to x.
​
We will make use of this observation heavily throughout the rest of the article.
​
Let f(k)f(k) equal the number of operations required to reduce 2k2k to 0. We will use this definition of ff throughout the article. What is the value of f(k)f(k)? It would be the sum of the 3 steps above. Let's analyze each step separately.
​
When we start step 1, the k−1k−1 bits to the right of the most significant bit are all 0. After step 1, the k−1k−1 bits to the right represent 2k−12k−1, because we set the bit at position k−1k−1. As you can see, step 1 is actually just converting 0 to 2k−12k−1. From the critical observation, we know that this will cost the same number of operations as converting 2k−12k−1 to 0. Thus, step 1 costs f(k−1)f(k−1) operations
The base case of this recurrence is when k=0k=0. We have n=20=1n=20=1, which requires using the first operation once. Thus, f(0)=0f(0)=0.
​
Calculating f(k)f(k) will cost O(k)O(k), although we could improve it to O(1)O(1) with memoization (but then we would need more space and general overhead). Is there a way we can calculate f(k)f(k) more efficiently?
​
With some analysis, we can show that f(k)=2k+1−1f(k)=2k+1−1.
​
The value of our base case is f(0)=1f(0)=1, which can conveniently be written in the form 2k−12k−1 where kk is a non-negative integer, i.e. its value is a power of 2 minus one. When we plug this back into ff, we get 2⋅(2k−1)+1=2k+1−12⋅(2k−1)+1=2k+1−1. Without loss of generality, we have another power of two minus one.
​
As you can see, plugging a power of two minus one into our recurrence simply gives us the next power of two minus one. Because our base case is a power of two minus one, all values of ff will be a power of two minus one, specifically f(k)=2k+1−1f(k)=2k+1−1. This method is commonly known as mathematical induction.
​
We can easily verify this formula by looking at values of ff.
k   breakdown   value of f(k)