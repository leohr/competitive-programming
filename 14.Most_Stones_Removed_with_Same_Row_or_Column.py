class Solution:
    def ccDFS(self, G, v, cc, cnt):
        cc[v] = cnt 
        toVisit = [] 
        for u in G[v]: 
            if cc[u] == 0: 
                toVisit.append(u)
        while len(toVisit) > 0: 
            v = toVisit[0] 
            toVisit.pop(0)
            cc[v] = cnt
            for u in G[v]: 
                if cc[u] == 0: 
                    toVisit.append(u)
        return cc 

    def removeStones(self, stones: List[List[int]]) -> int:
        # Build graph 
        n = len(stones)  
        r = range(n) 
        G = {i: set() for i in r}
        for i in r: 
            for j in range(i+1, n): 
                if (stones[i][0] == stones[j][0] or stones[i][1] == stones[j][1]): 
                    G[i].add(j)
                    G[j].add(i)
        
        # Kind of DFS to get the connected component of each vertex  
        cc = [0 for i in r] 
        cnt = 0
        for i in r: 
            if cc[i] == 0: 
                cnt += 1
                cc = self.ccDFS(G, i, cc, cnt)
        
        # Count number of vertices in each connected component
        ccSize = dict() 
        for i in cc: 
            if i in ccSize.keys(): 
                ccSize[i] += 1
            else: 
                ccSize[i] = 1

        # The answer is the sum of size(cc)-1 across each component
        ans = 0 
        for i in ccSize: 
            ans += ccSize[i] - 1

        return ans
