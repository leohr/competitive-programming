# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def deepestLeavesSum(self, root: Optional[TreeNode]) -> int:
        def solve(root, depth, count): 
            if (depth not in count.keys()): 
                count[depth] = root.val 
            else: 
                count[depth] += root.val 
                
            if root.left is not None: 
                count = solve(root.left, depth+1, count) 
                
            if root.right is not None: 
                count = solve(root.right, depth+1, count) 
                
            return count 
        
        count = solve(root, 0, {}) 
        return count[max(count.keys())] 
            
