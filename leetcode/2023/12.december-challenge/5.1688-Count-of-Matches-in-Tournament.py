class Solution:
    def numberOfMatches(self, n: int) -> int:
        ans = 0 
        while n > 1: 
            ans += int(n/2) 
            n = n/2 if n % 2 == 0 else int(n/2) + 1
        return ans  
