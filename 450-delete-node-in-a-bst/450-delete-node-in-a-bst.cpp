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
    TreeNode* deleteNode(TreeNode* root, int key) {
        
        if(root == NULL){
		return NULL;
	}

	if(key<root->val){
		root->left = deleteNode(root->left, key);
		return root;
	}

	if(key == root->val){
		//3 cases:

		//1. Node with 0 children
		if(root->left==NULL and root->right==NULL){
			delete root;
			return NULL;
		}

		//2. Node with 1 child {we need find which sub tree that child is present and need to delete it}
		if(root->left!=NULL and root->right==NULL){//if left is not null means child may present here.
			TreeNode* temp = root->left;
			delete root;
			return temp;
		} else if(root->left == NULL and root->right!=NULL){
			TreeNode* temp = root->right;
			delete root;
			return temp;
		}

		//3. node with 2 children
		if(root->right!=NULL and root->left!=NULL){

			//To find immediate sucessor at right sub tree.
			TreeNode* replace = root->right;

			while(replace->left!=NULL){
				replace = replace->left;
			}

			root->val = replace->val;

			//deleting in right subtree after replacing at main root.
			root->right = deleteNode(root->right, replace->val);

			return root;


		}


	}

	if(key>root->val){
		root->right = deleteNode(root->right, key);
		return root;
	}
        
    return root;
        
    }
};