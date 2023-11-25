Firstly we create a array ans of double datatype to store our combined sorted array.
Now push the elements of nums1 and nums2 into our ans array.
Then we sort the ans array and find the median.
​
If n is odd it means our median is ans[n/2] else if its even it means we have two mid elements and hence our median is avg of ans[n/2] and ans[n/2 - 1].
​
Return the answer.