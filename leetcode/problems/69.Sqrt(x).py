class Solution:
    def mySqrt(self, x: int) -> int:
        y = 0 
        while y*y < x: 
            y += 1 
        if y*y == x: 
            return(y) 
        else: 
            return(y-1)
