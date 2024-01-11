# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def amountOfTime(self, root: Optional[TreeNode], start: int) -> int:
        # Get ancestors of infection starting node 
        parents, start = self.findStartAncestors(root, start)
        # Run DFS for computing the distance from 'start' to each other node 
        distance = self.dfs(parents, start)
        # Return maximum distance 
        return max([distance[x] for x in distance]) 
        
    def findStartAncestors(self, root, start): 
        toVisit, parents = [root], dict() 
        parents[root] = None
        while toVisit: 
            v = toVisit.pop() 
            if v.val == start: 
                start = v 
                break 
            if v.right is not None: 
                toVisit.append(v.right)
                parents[v.right] = v 
            if v.left is not None: 
                toVisit.append(v.left) 
                parents[v.left] = v 
        return (parents, start) 

    def dfs(self, parents, start):
        toVisit, visited, distance = [start], set(), dict()
        distance[start] = 0  
        while toVisit: 
            v = toVisit.pop()
            visited.add(v) 
            if v.left is not None and v.left not in visited: 
                distance[v.left] = distance[v] + 1
                toVisit.append(v.left)
            if v.right is not None and v.right not in visited: 
                distance[v.right] = distance[v] + 1
                toVisit.append(v.right)
            if v in parents.keys() and parents[v] is not None and parents[v] not in visited:  
                    distance[parents[v]] = distance[v] + 1 
                    toVisit.append(parents[v])
        return distance
