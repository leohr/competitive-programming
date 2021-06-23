class Solution:
    def maxArea(self, h: int, w: int, horizontalCuts: List[int], verticalCuts: List[int]) -> int:
        def maxDist(h: int, v: List[int]): 
            n = len(v)
            maxDist = 0
            for i in range(0, n+1): 
                 if i == 0:
                    dist = v[i]
                 elif i == n:
                    dist = h - v[i-1]
                 else: 
                    dist = v[i] - v[i-1]
                 maxDist = max(maxDist, dist)
            return maxDist
        horizontalCuts.sort()
        verticalCuts.sort()
        maxH = maxDist(h, horizontalCuts)
        maxV = maxDist(w, verticalCuts)
        return maxH*maxV % 1000000007