class Solution:
    def maxCoins(self, piles: List[int]) -> int:
        piles.sort() 
        n = int(len(piles)/3)
        ans = 0 
        for i in range(3*n): 
            if i >= n and (i-n)%2 == 0 : 
                ans += piles[i]
        return ans
        
