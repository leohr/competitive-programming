/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* v = root; 
        
        if (!root) return new TreeNode(val); 
        
        while (true) {
            int current = v-> val; 
            
            if (val > current) {
                if (v -> right) {
                    v = v -> right; 
                    continue; 
                } else {
                    v -> right = new TreeNode(val); 
                    break; 
                }
            } else {
                if (v -> left) {
                    v = v -> left; 
                    continue; 
                } else {
                    v -> left = new TreeNode(val); 
                    break; 
                }
            }
        }
        
        return root; 
    }
};