class Solution:
    def countGoodStrings(self, low: int, high: int, zero: int, one: int) -> int:
        values = [0 for i in range(high+1)]
        values[zero] += 1
        values[one] += 1
        for i in range(high+1): 
            if (values[i] != 0):
                if (i + zero <= high): 
                    values[i + zero] += values[i]
                if (i + one <= high): 
                    values[i + one] += values[i] 
        ans = 0 
        for i in range(low, high+1): 
            ans += values[i] 
        ans = ans % 1000000007
        return (ans) 
        
