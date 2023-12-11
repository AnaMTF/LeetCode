We can count the frequency of each num in arr using a hash map counts. Once we have all the frequencies, we can iterate over the keys of counts and check which one has a value greater than n / 4, where n is the length of arr.
​
If a key in counts has a value greater than n / 4, it must occupy more than 25% of arr and thus would be our answer.
​
Note that in languages like Java and C++, integer division of n / 4 will round the result down. Rounding down does not affect our strategy. The reason that rounding down doesn't change anything is because when we round down, we are removing a decimal. However, this decimal is irrelevant because the next integer will always be larger than the result even if we didn't remove the decimal.
​
For example, let's say we had n = 10. n / 4 = 2.5. By doing integer division, we remove the .5. However, the next integer 3 is larger than 2.5 regardless, so when we evaluate 10 / 4 as 2, there is no difference between comparing 3 > 2.5 and 3 > 2. The only scenarios that would be affected would be when a frequency is greater than 2 but less than 2.5. However, the frequencies must be integers, so this scenario would never happen.
​
Algorithm
​
Initialize a hash map counts.
Iterate over each element in arr. For each element num, increment counts[num].
Set target = arr.length / 4.
Iterate over each key, value pair in counts:
If value > target, return key.
The code should never reach this point since it's guaranteed an answer exists. Return anything.
​