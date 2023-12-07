Method: recursion
​
Since nums is a sorted list, the middle element nums[len(nums)//2] must be the root node of nums.
Thus, after setting the middle element be the root, finding the middle element in the left subarry nums[:len(nums)//2] and right subarry nums[len(nums)//2 + 1 : ]
​
For example, nums = [0, 1, 2, 3, 4, 5, 6, 7]