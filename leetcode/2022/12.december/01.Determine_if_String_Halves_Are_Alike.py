class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        n1, n2, n = 0, 0, len(s)
        for i in range(n):
            if s[i] in 'aeiouAEIOU': 
                if i < n/2: 
                    n1 += 1
                else: 
                    n2 += 1
        if n1 == n2: 
            return True
        else: 
            return False 
