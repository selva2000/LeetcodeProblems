/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        
        vector<vector<int>> all_level;
        vector<int> ans;
        
        if(!root)  return {};
        
        queue<Node*> q;
        
        q.push(root);
        q.push(NULL);
        
        while(!q.empty()){
            
            int n = q.size();
            
            Node* front = q.front();
            
            if(front == NULL){
                
                all_level.push_back(ans);
                ans.clear();
                
                q.pop();
                if(!q.empty()){
                    q.push(NULL);
                }
                
            } else{
                
                ans.push_back(front->val);
                
//                 if(front->left!=NULL){
//                     q.push(front->left);
//                 }
                
//                 if(front->right!=NULL){
//                     q.push(front->right);
//                 }
                
                //for(int i=0; i<n; i++){
                
                q.pop();
                    
                    for(auto a : front->children) q.push(a);
                    
                //}
                
                
                
                
            }
        }
        
        return all_level;
        
    }
};