# The guess API is already defined for you.
# @param num, your guess
# @return -1 if num is higher than the picked number
#          1 if num is lower than the picked number
#          otherwise return 0
# def guess(num: int) -> int:

class Solution:
    def guessNumber(self, n: int) -> int:
        x, y = 1, n
        while y - x  > 1: 
            m = int((x + y)/2) 
            if guess(m) == 0: 
                return m
            if guess(m) == 1: 
                x = m
            if guess(m) == -1: 
                y = m
        if guess(x) == 0: 
            return x
        else: 
            return y
