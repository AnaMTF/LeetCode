​
If the target lies within this sorted left half: We know this if the target is greater than or equal to the element at $$ \text{low} $$ and less than the element at $$ \text{mid} $$. If this is the case, we then move our search to this half, meaning, we update $$ \text{high} $$ to $$ \text{mid} - 1 $$.
​
Otherwise: The target must be in the right half. So, we update $$ \text{low} $$ to $$ \text{mid} + 1 $$.
​
If right half $$[mid...high]$$ is sorted: This is the else part. If the left half isn't sorted, the right half must be!
​
If the target lies within this sorted right half: We know this if the target is greater than the element at $$ \text{mid} $$ and less than or equal to the element at $$ \text{high} $$. If so, we move our search to this half by updating $$ \text{low} $$ to $$ \text{mid} + 1 $$.
​
Otherwise: The target must be in the left half. So, we update $$ \text{high} $$ to $$ \text{mid} - 1 $$.
​
Rationale:
​
The beauty of this approach lies in its ability to determine with certainty which half of the array to look in, even though the array is rotated. By checking which half of the array is sorted and then using the sorted property to determine if the target lies in that half, we can effectively eliminate half of the array from consideration at each step, maintaining the $$ O(\log n) $$ time complexity of the binary search.
​
Complexity
​
Time Complexity: The time complexity is $$ O(\log n) $$ since we're performing a binary search over the elements of the array.
​
Space Complexity: The space complexity is $$ O(1) $$ because we only use a constant amount of space to store our variables ($$ \text{left} $$, $$\text{right} $$, $$ \text{mid} $$), regardless of the size of the input array.