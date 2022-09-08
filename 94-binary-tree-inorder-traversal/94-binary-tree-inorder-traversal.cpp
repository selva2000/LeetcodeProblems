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
     
     vector<int>res;
    void print(TreeNode* root){
        
        if(root==NULL)
        {
            return;
        }
        
        if(root!=NULL)
        {
            print(root->left);
            res.push_back(root->val);
            //cout<<root->val;
            print(root->right);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        print(root);
        return res;
    }
};