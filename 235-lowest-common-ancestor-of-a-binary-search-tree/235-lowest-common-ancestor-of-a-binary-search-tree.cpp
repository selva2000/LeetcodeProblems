/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == p or root == q){
            return root;
        }
        
        if(root == NULL){
            return NULL;
        }
        
        TreeNode* leftSide = lowestCommonAncestor(root->left, p, q);
        TreeNode* rightSide = lowestCommonAncestor(root->right, p, q);
        
        if(leftSide!=NULL and rightSide!=NULL){
            return root;
        }
        
        if(leftSide!=NULL){
            return leftSide;
        } else {
            return rightSide;
        }
        
    }
};