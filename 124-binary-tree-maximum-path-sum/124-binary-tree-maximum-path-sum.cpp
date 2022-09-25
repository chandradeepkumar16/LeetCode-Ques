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
    
    int solve(TreeNode* root , int& ans){
        
        if(root==NULL){
            return 0;
        }
        
        int left = solve(root->left , ans);
        int right = solve(root->right , ans);
        int v=root->val;
        
        ans=max({ans , v , left+right+v , left+v , right+v});
        
        return max(max(right,left)+v, v);              
    }
    
    
    int maxPathSum(TreeNode* root) {
        
        int ans=INT_MIN;
        solve(root , ans);
        return ans;
        
    }
};