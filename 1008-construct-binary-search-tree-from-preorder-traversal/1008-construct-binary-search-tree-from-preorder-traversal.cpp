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
    
    TreeNode* helper(TreeNode* root , int k){
        
        if(root==NULL){
            root= new TreeNode(k);
            return root;
        }
        
        if(root->val>k){
            root->left=helper(root->left ,k);
        }
        else if (root->val <k){
            root->right = helper(root->right , k);
        }
        return root;
        
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode *ans=new TreeNode(preorder[0]);
        
        for(int i=1;i<preorder.size();i++){
            helper(ans , preorder[i]);
        }
        
        return ans;
    }
};