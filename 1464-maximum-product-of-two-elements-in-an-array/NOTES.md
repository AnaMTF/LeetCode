Intuitively, given all the candidates are non-negative, if you wanted to maximize the product of x * y, you would choose the largest values for x and y.
​
In this problem, we need to subtract one from our numbers before multiplying them. However, this doesn't change the logic of choosing the largest numbers, since every element will be reduced by the same amount and will still be non-negative. Thus, it is optimal for us to choose the two largest elements.
​
We can sort the array to easily find the two largest elements.
​
Algorithm
​
Sort nums in ascending order.
Set x as the last element in nums and y as the second last element in nums.
Return (x - 1) * (y - 1).
​