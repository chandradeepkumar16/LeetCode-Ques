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
        void helper(TreeNode* &root, int val, int depth, int count){
        if(!root) return; 
        
        if(count == depth - 1){
            TreeNode *temp = new TreeNode(val);
            temp -> left = root -> left;
            root -> left = temp;
            
            temp = new TreeNode(val); 
            temp -> right = root -> right;
            root -> right = temp;
            return;
        } 
        helper(root -> left, val, depth, count+1); 
        helper(root -> right, val, depth, count+1); 
    }
    
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1){ 
            TreeNode* temp = new TreeNode(val);
            temp -> left = root;
            return temp;
         } 
        
        helper(root, val, depth, 1);
        return root; 
    }
};