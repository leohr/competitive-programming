class Solution:
    def climbStairs(self, n: int) -> int:
        f = [0 for i in range(n+3)]
        f[1], f[2] = 1, 1
        for i in range(1, n+1): 
            f[i+1] += f[i] 
            f[i+2] += f[i]
        return f[n]
