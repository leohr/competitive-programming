# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def mergeTrees(self, root1: Optional[TreeNode], root2: Optional[TreeNode]) -> Optional[TreeNode]:        
        def mergeVals(root1, root2, root): 
            if root1 is not None and root2 is not None: 
                root = TreeNode() 
                root.val = root1.val + root2.val 
                root.left, root.right = None, None 
                root.left = mergeVals(root1.left, root2.left, root.left)
                root.right = mergeVals(root1.right, root2.right, root.right)
            elif root1 is not None: 
                root = root1
            elif root2 is not None: 
                root = root2
            return (root) 
        
        root = None 
        root = mergeVals(root1, root2, root) 
                
        return(root) 
