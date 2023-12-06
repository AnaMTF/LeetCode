First, we make the following observation. Consider a group t of consecutive repeating characters. The length of compressed t is less than or equal to the length of t. For example, d tranforms into d, cc into c2, aaaa into a4, bbbbbbbbbbbb into b12.
​
This observation allows processing groups in the array chars from left to right.
​
In the slideshow above, we compress the array chars = ["c","c","b","a","a","a","a","a","a","a","a","a","a"]. First, we process the group cc, then b, and finally aaaaaaaaaa.
Unprocessed characters are in white cells.
​
Processed characters that we may overwrite in the future are in blue cells.
​
Characters that belong to the answer and will not change are in green cells.
​
When processing a group, we first find its size groupLength and paint its cells blue. Then we append the character of the group to the answer. If groupLength is greater than 11, we also append the string representation of groupLength to the answer. Because the problem wants us to form the answer in place, instead of "appending" to the answer we will overwrite the corresponding blue cells by repainting them green.
​
White cells will eventually become blue and blue ones may become green. Since the compressed group takes up fewer cells than the uncompressed, the white cell cannot immediately become green.
Algorithm
​
Declare the variables i – the first index of the current group, and res – the length of the answer (of the compressed string). Initialize i = 0, res = 0.
While i is less than the length of chars:
Find the length of the current group of consecutive repeating characters groupLength.
Add chars[i] to the answer (chars[res++] = chars[i]).
If groupLength > 1, add the string representation of groupLength to the answer and increase res accordingly.
Increase i by groupLength and proceed to the next group.
Return res.
​