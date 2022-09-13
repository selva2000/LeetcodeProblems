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
    
     int target = 0; 
    bool pathFound = false;
    
    bool hasPathSum(TreeNode* root, int targetSum) 
    {                
        
        if(root == NULL){
            return 0;
        }
        
        if(root != NULL)
        {
            target  += root->val;
            
            if(root->left == NULL && root->right == NULL)
            {
                if(target == targetSum)
                    pathFound = true;
                // else{
                //     target  -= root->val;
                // }
            }
            else
            {
                int left = hasPathSum(root->left, targetSum);
                int right = hasPathSum(root->right, targetSum);
            }
            
            target  -= root->val;    
        }

        return (pathFound == true) ? true : false;
     }
};