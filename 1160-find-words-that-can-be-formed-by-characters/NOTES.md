If you are not already familiar with hash maps, please check out our relevant LeetCode explore card.
​
In this problem, we need to determine which elements in words can be built using the letters from chars. A word can be built from chars if and only if the following condition is true:
​
For each unique character c in word, the frequency of c is not greater in word than it is in chars. That is, there are no characters that appear more in word than in chars.
​
If any character appears more in word than in chars, there won't be enough of that character in chars to build word with. To solve this problem, we will start by counting the frequency of every character in chars using a hash map counts.
​
Once we have calculated counts, we can check each word one by one. For a given word, we count the frequency of its characters using a hash map wordCount. Then, we can iterate over each unique character c in wordCount. For each character in c, we can find the frequency in chars by checking counts[c]. We can also find the frequency in word by checking wordCount[c]. We then compare these values.
​
If counts[c] < wordCount[c] for ANY character, the current word cannot be built. We will use a boolean flag good to indicate if a given word can be built or not. Initially, we set good = true. If we find counts[c] < wordCount[c] for any character, we set good = false. Once we have finished checking all the characters of a word, we check the flag good. If it is still true, we know we can build word and add the length of word to our answer.
​
Algorithm
​
Create a hash map counts that records the frequency of every character in chars.
Initialize the answer ans = 0.
Iterate over each word in words:
Create a hash map wordCount that records the frequency of every character in words.
Set good = true.
Iterate over each key c in wordCount. Let freq = wordCount[c].
If counts[c] < freq, set good = false and break from the loop.
If good = true, add the length of word to ans.
Return ans.
​