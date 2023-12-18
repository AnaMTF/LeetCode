To find the elements in a list that are not present in another list, we can loop over every element in the first list and for each element we loop over the elements in the second list to check if it's present or not. If we find the element, we will not store it in the answer list; otherwise, we can store it.
​
This way, we will have to apply the above method twice once for the elements that are only in nums1 and then again for the elements that are only present in nums2.
​
Algorithm
​
Define method getElementsOnlyInFirstList, this method accepts two lists of integers and returns the elements that are present only in the first argument:
This method uses the same algorithm that we discussed: loop over the first list and for every element, check the second list. If the element is found in the second list we break and mark a boolean variable existInNums2 as true.
After checking all the elements in the second list, if the variable existInNums2 is false, only then we store the element in the list onlyInNums1.
Return onlyInNums1.
​
Call the method getElementsOnlyInFirstList once for the param (nums1, nums2) and then again for (nums2, nums1).
​