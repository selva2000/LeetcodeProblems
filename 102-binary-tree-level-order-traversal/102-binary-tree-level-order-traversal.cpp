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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
         if (root == nullptr){ return {}; }
        
        
        
        queue<TreeNode*>q;
        
        q.push(root);
        q.push(nullptr);
        
        vector<vector<int>> all_level;
        vector<int> current_level;
        
        
        while(!q.empty()){
            
            TreeNode* front = q.front();
            
            
            if(front==NULL){
                //cout<<",";
                
                all_level.push_back(current_level);
                current_level.clear();
                
                q.pop();
                if(!q.empty()){
                    q.push(nullptr);
                }
            }
            
            else{
                
                current_level.push_back(front->val);
                
                q.pop();
                
                if(front->left!=nullptr){
                    q.push(front->left);
                }
                if(front->right!=nullptr){
                    q.push(front->right);
                }
               
            }
            
        }
        return all_level;
        
    }
    
};