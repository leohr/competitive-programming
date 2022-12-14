# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxProduct(self, root: Optional[TreeNode]) -> int:
        # Run BFS to get leaves, parents and total tree value 
        leaves, parents, treeVal = self.BFS(root) 
        # Run backtracking algorithm for compute possible answers 
        ans = 0 
        visited = set() 
        toVisit = leaves 
        while toVisit:
            # print('To visit:', toVisit)
            v = toVisit.pop(0)  
            visited.add(v) 
            ans = max(ans, v.val*(treeVal - v.val))
            if v in parents.keys(): 
                p = parents[v] 
                p.val += v.val 
                if (p.left in visited or p.left is None) and (p.right in visited or p.right is None): 
                    toVisit.append(p) 
        return int(ans % (1e9 + 7))


    def BFS(self, root): 
        toVisit = [root] 
        leaves  = []
        parents = dict()
        treeVal = 0
        while toVisit: 
            v = toVisit.pop(0) 
            treeVal += v.val
            if not v.left is None: 
                toVisit.append(v.left) 
                parents[v.left] = v
            if not v.right is None: 
                toVisit.append(v.right) 
                parents[v.right] = v
            if v.left is None and v.right is None: 
                leaves.append(v) 
        return [leaves, parents, treeVal]
