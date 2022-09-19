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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        /*if(p == NULL or q == NULL){
            return (p==q);
        }
        return p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);*/
            
       queue<TreeNode*> Q;
        if(!p or !q) return p==q;       //If both roots are null
        Q.push(p); Q.push(q);           //Push both the roots in the queue                  
        while(!Q.empty())  {
            TreeNode* left = Q.front(); Q.pop();                //Store one node in left and pop
            TreeNode *right = Q.front(); Q.pop();               //Store other in right and pop
            if(!left and !right) continue;                      //If both nodes are null -> continue
            if(!left or !right) return false;                   //If one of them is null, simply return false
            if(left->val != right->val) return false;           //If they are not equal, return false
            
            //Push left childs of both nodes
            Q.push(left->left);                         
            Q.push(right->left);

            //Push right child of both nodes
            Q.push(left->right);
            Q.push(right->right);
        }
        return true;  
        
    }
};