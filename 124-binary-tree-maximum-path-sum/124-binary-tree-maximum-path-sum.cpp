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
    int maxPathSum(TreeNode* root) {
        
        /*ir p;
        if(root == NULL){
            p.left = root->val + 0;
            p.right = root->val + 0;
            return p;
        }
        
        Pair left_side = maxPathSum(root->left);
        Pair right_side = maxPathSum(root->right);
        
        p.left = max(left_side.left, right_side.right);
        
        return p;*/
        
        int maxi = INT_MIN;
        maxPathDown(root, maxi);
        return maxi;
    }
    
    int maxPathDown(TreeNode*root, int &maxi){
        
        if(root == NULL){
            return 0;
        }
        
        int left = max(0, maxPathDown(root->left, maxi));
        int right = max(0, maxPathDown(root->right, maxi));
        
        maxi = max(maxi, root->val + left + right);
        return root->val + max(left, right);
    }
};