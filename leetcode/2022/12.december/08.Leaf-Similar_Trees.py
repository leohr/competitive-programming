# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def leafSimilar(self, root1: Optional[TreeNode], root2: Optional[TreeNode]) -> bool:
        return self.getLeaves(root1) == self.getLeaves(root2)

    def getLeaves(self, root): 
        leaves, toVisit = [], [root]
        while toVisit:
            v = toVisit.pop()
            if not v.left is None: 
                toVisit.append(v.left) 
            if not v.right is None: 
                toVisit.append(v.right) 
            if v.left is None and v.right is None: 
                leaves.append(v.val) 
        return leaves

