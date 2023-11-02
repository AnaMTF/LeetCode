# Given a string array words, return an array of all characters that show up in all strings within the words (including duplicates). You may return the answer in any order.

# Example 1:

# Input: words = ["bella","label","roller"]
# Output: ["e","l","l"]
# Example 2:

# Input: words = ["cool","lock","cook"]
# Output: ["c","o"]


from collections import defaultdict,Counter
class Solution:
    def commonChars(self, words: List[str]) -> List[str]:
        answer = []
        d = {}
        nr = defaultdict(int)
        for i in words[0]:
            d[i]=1
            nr[i]+=1
        for i in words[1:]:
            t=Counter(i)
            for j in set(i):
                if j in d:
                    d[j]+=1
                    nr[j]=min(nr[j],t[j])
        for i,j in d.items():
            if j == len(words):
                answer+=(nr[i]*[i])
        return answer

        
