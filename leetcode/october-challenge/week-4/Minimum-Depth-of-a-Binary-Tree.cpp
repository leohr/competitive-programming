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
    int minDepth(TreeNode* root) {
        if (root == NULL) 
            return 0; 
        
        int ans = 1; 
        TreeNode* current = root; 
        stack<TreeNode*> parents, children; 
        parents.push(current); 
        
        bool ok = false; 
        while (true) {
            while (!children.empty()) 
                children.pop(); 

            int n = parents.size();
            for (int i = 0; i < n; ++i) {
                current = parents.top(); 
                if (current->left != NULL) 
                    children.push(current->left); 
                if (current->right != NULL) 
                    children.push(current->right); 
                if (current->left == NULL & current->right == NULL) 
                    ok = true; 
                parents.pop(); 
            } 
            if (ok) 
                break; 
            parents = children; 
            ++ans; 
        }
        
        return ans; 
    }
};