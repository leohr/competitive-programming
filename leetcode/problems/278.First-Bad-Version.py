# The isBadVersion API is already defined for you.
# def isBadVersion(version: int) -> bool:

class Solution:
    def firstBadVersion(self, n: int) -> int:
        i = 1 
        j = n
        while i < j-1: 
            k = int((i + j)/2)
            if isBadVersion(k): 
                j = k 
            else: 
                i = k
        if isBadVersion(i):
            return i
        else: 
            return j
        