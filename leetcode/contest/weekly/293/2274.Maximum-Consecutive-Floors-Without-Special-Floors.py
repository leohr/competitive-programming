class Solution:
    def maxConsecutive(self, bottom: int, top: int, special: List[int]) -> int:
        special.sort() 
        print(special) 
        ans = special[0] - bottom 
        i, n = 0, len(special)
        while i < n-1: 
            ans = max(ans, special[i+1] - special[i] - 1) 
            i += 1 
        ans = max(ans, top - special[n-1])
        return ans 
