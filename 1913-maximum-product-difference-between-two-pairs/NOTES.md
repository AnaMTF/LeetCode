In this problem, we need to determine the maximum value of:
​
a * b - c * d
​
Where a, b, c, d are all elements in nums. Note that while it is possible for the same value to be used multiple times, we are not allowed to use the same index of nums multiple times.
​
For example, let's say a = b = 4. This is only possible if 4 shows up at least twice in nums. If 4 only appears once in nums, we can't use it twice.
​
Let's separate the equation into two parts:
​
a * b
c * d
​
As we are subtracting the 2nd part from the 1st part, we want to maximize the 1st part while minimizing the 2nd part.
​
Because the values of nums are non-negative, we can maximize a product by choosing the two largest elements in nums. Similarly, we can minimize a product by choosing the two smallest elements in nums. Thus, we will choose the following elements:
​
a as the largest value in nums.
b as the second-largest value in nums.
c as the smallest value in nums.
d as the second smallest value in nums.
​
To find a, b, c, d, we will sort nums. Then, we can simply return a * b - c * d. Note that we do not need to actually allocate variables for a, b, c, d, rather we can just access the array elements directly.
​
Algorithm
​
Sort nums in ascending order.
Return nums[nums.length - 1] * nums[nums.length - 2] - nums[0] * nums[1].
​