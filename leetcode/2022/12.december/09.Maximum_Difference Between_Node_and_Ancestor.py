# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxAncestorDiff(self, root: Optional[TreeNode]) -> int:
        leaves, parents = self.getLeavesAndParents(root)
        ans = 0
        for v in leaves: 
            p = parents[v] 
            m = min(root.val, v.val)
            M = max(root.val, v.val)
            while True:        
                m = min(m, v.val)
                M = max(M, v.val)
                v = p 
                if v == root: 
                    break
                p = parents[v]
            ans = max(M - m, ans) 
        return ans 

    
    def getLeavesAndParents(self, root): 
        toVisit = [root] 
        leaves = [] 
        parents = dict() 
        while toVisit:
            v = toVisit.pop()
            if not v.left is None: 
                toVisit.append(v.left) 
                parents[v.left] = v
            if not v.right is None: 
                toVisit.append(v.right) 
                parents[v.right] = v
            if v.left is None and v.right is None: 
                leaves.append(v) 
        return (leaves, parents)

