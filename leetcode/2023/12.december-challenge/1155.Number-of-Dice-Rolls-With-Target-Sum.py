class Solution:
    def numRollsToTarget(self, n: int, k: int, target: int) -> int:
        ans = dict() 

        for t in range(target + 1): 
            ans[(1, t)] = 1 if (t > 0 and t <= k) else 0
        
        for i in range(2, n + 1): 
            for t in range(target + 1):
                aux = 0  
                for kk in range(1, k + 1): 
                    aux += ans[(i - 1, t - kk)] if (i - 1, t - kk) in ans.keys() else 0 
                ans[(i, t)] = int(aux % (1e9 + 7))

        return ans[(n, target)]
