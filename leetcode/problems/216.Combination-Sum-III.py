class Solution:
    def combinationSum3(self, k: int, n: int) -> List[List[int]]:
        
        def fullSolution(N, K):
            ans = {}
            for k in range(1, K): 
                for n in range(1, N): 
                    ans[(n,k)] = []
                    if k == 1 and n < K: 
                        ans[(n,k)].append([n])
                    if k > 1: 
                        for i in range(1, K): 
                            if (n-i, k-1) in ans.keys():
                                currentAns = ans[(n-i, k-1)][:]
                                for current in currentAns: 
                                    if i not in current: 
                                        c = current[:] 
                                        c.append(i)
                                        c.sort() 
                                        if c not in ans[(n,k)]: 
                                            ans[(n,k)].append(c)   
            return ans
        
        ans = fullSolution(n+1, 10)
        return ans[(n, k)]