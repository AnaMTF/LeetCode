# Given an array of strings nums containing n unique binary strings each of length n, return a binary string of length n that does not appear in nums. If there are multiple answers, you may return any of them.
class Solution:
    def findDifferentBinaryString(self, nums: List[str]) -> str:
        integers = set()
        for num in nums:
            integers.add(int(num,2))

        n = len(nums)
        for num in range (n+1):
            if num not in integers:
                ans = bin(num)[2:]
                return "0"*(n-len(ans))+ans
        return ""
        
