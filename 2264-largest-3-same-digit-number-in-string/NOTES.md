​
​
ASCII values of characters 0 to 9 range from 48 to 57. We need to initialize maxDigit with the character having an ASCII value smaller than 48. Here we will initialize it with NUL � character which has ASCII value 0.
​
This approach offers no additional advantages over the time and space complexities of the initial approach but it is listed here for the completeness of the article.
​
However, if faced with a follow-up question where the numbers are represented in a non-decimal base and the number of digits (denoted as b) can be significantly larger, the previous approach will become sub-optimal and we would be expected to propose a more optimized solution. This approach will be independent of the number of digits in the number system.
​
This alternative approach involves iterating through the num string using a window of size 3. While iterating, if all characters of the window are the same then we store the character in maxDigit if it is bigger than the character already stored in maxDigit. In the end, we return a string of size 3 formed using maxDigit.
Algorithm
​
Create a variable maxDigit initially assigned to the NUL character �.
​
Iterate on string num from index idx = 0 till num.size() - 3.
For any index idx, if the idx, (idx + 1), and (idx + 2) index characters are the same then store the maximum of maxDigit and num[idx] in maxDigit.
​
If maxDigit stores the NUL character, return an empty string. Otherwise, return a string having three maxDigit characters.
​