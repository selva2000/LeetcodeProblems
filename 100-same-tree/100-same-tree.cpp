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
            
        TreeNode *left, *right;
        if (!p or !q)
            return p==q;
        
        queue<TreeNode*> q1;
        q1.push(p);
        q1.push(q);
        while(!q1.empty()){
            left = q1.front();
            q1.pop();
            right = q1.front();
            q1.pop();
            if (NULL == left && NULL == right)
                continue;
            if (NULL == left || NULL == right)
                return false;
            if (left->val != right->val)
                return false;
            q1.push(left->left);
            q1.push(right->left);
            
            q1.push(left->right);
            q1.push(right->right);
            
        }
        return true;
        
    }
};