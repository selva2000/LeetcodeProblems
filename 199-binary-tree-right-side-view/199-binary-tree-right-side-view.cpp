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
    
    void printRightView(TreeNode* root, int level, int &maxLevel, vector<int> &ans){
        
        if(root == NULL){
            return ;
        }
        
        if(maxLevel < level){
            ans.push_back(root->val);
            maxLevel = level;
        }
        
        //right and left
        printRightView(root->right, level + 1, maxLevel, ans);
        printRightView(root->left, level + 1, maxLevel, ans);
        
        //return ans;
        
        
    }
    
    vector<int> rightSideView(TreeNode* root) {
        
        vector<int> ans;
        
        int maxLevel = -1;
        
        printRightView(root, 0, maxLevel, ans);  
        
        return ans;
        
        
    }
};