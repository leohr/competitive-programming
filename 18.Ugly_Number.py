class Solution:
    def isUgly(self, n: int) -> bool:
        if n < 1: 
            return False
        
        for i in range(2, int(math.sqrt(n))+1): 
            while n % i == 0: 
                n = n/i 
                if i > 5: 
                    return False 

        if n > 5: 
            return False 

        return True 
        
