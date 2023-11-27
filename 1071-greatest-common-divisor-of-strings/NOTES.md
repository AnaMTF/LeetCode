We have shown that if there is a shorter string that divides both str1 and str2, then gcdBase is also a divisible string, so a divisible string shorter than gcdBase can never be the GCD string.
​
Is it possible for the a string longer than gcdBase to be divisible, and thus gcdBase is not the GCD string?
​
No. Assume that there exists a string longerBase that is a divisible string with length longerLength > gcdLength,
​
Since longerBase is a divisible string, its length longerLength must be a divisor of m and n.
​
This contradicts the assumption that gcdLength is the GCD of m and n.
​
Therefore there doesn't exist a divisible string longer than gcdBase.
​
In conclusion, if there exists divisible strings, the GCD string must be gcdBase.
​
Algorithm
​
Check if the concatenations of str1 and str2 in different orders are the same.
If not, return "".
​
Get the GCD gcdLength of the two lengths of str1 and str2.
​
Return the prefix string with a length of gcdLength of either str1 or str2 as the answer.
​