# Return the number of permutations of 1 to n so that prime numbers are at prime indices (1-indexed.)

# (Recall that an integer is prime if and only if it is greater than 1, and cannot be written as a product of two positive integers both smaller than it.)

# Since the answer may be large, return the answer modulo 10^9 + 7.
class Solution:
    def numPrimeArrangements(self, n: int) -> int:
        def checkPrime(x: int) -> bool:
            
            if x == 1:
                return False
            if x == 2:
                return True
            else:
                for f in range (2, int(sqrt(x))+1):
                    if x % f == 0:
                        return False
                return True
    
        nr_pr= 0
      
        for i in range (1, n+1):
            if checkPrime(i):
                nr_pr += 1
           
        return (factorial(nr_pr)* factorial(n-nr_pr)) % (10**9 + 7)

        
