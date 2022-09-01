# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def goodNodes(self, root: TreeNode) -> int:
        def move(root, maxVal, count): 
            val = root.val 
            
            if val >= maxVal:
                count += 1
                maxVal = val

            if root.left is not None: 
                count = move(root.left, maxVal, count)

            if root.right is not None:
                count = move(root.right, maxVal, count) 

            return count 
    
        ans = move(root, -1e5, 0)
        return ans
        
