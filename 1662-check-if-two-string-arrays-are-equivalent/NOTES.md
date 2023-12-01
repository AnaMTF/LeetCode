We are given two arrays of strings. We need to find out if both arrays represent the same string, for this, the two strings formed by concatenating the strings in the respective arrays must be equal.
​
In this approach, we will do as the problem says. We will find the string represented by each array and then check if the two strings are equal or not. To find the string represented by the array, we just need to append all the strings present in it to one another in the same order they are present in the array.
Algorithm
​
Iterate over strings present in the array word1, append each string to a string word1Combined.
Iterate over strings present in the array word2, append each string to a string word2Combined.
Compare the above strings and return true if both are the same, otherwise return false.
​
Note: In Java, we must use StringBuilder as strings are Immutable in Java.