/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr)t, right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        if(root == NULL){
            return {};
        }
        
        //To Store the final result
        vector<vector<int>> result;
        
        //Creating queue to store
        queue<TreeNode*>q;
        
        //Initial root->value pushed
        q.push(root);
        
        //level works as flag variable
        int level = 0;
        
        while(!q.empty()){
            
            int size = q.size();
            
            //Mainting vector in the size of queue for each level
            vector<int> each_level(size);
  
            
            for(int i=0; i<size; i++){
                
                TreeNode* front = q.front();
                q.pop();
                
                if(level == 0){
                    each_level[i] = front->val; // When level is odd:Right->Left
                } else{
                    each_level[size-1-i] = front->val; // When level is even
                }
                
                if(front->left!=NULL){
                    q.push(front->left);
                }
                if(front->right!=NULL){
                    q.push(front->right);
                }
                
            }
            result.push_back(each_level);
            level = !level;
            
        }
        return result;
        
        
    }
};