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
    vector<int> v;
    
    void solve(TreeNode* root){
        if(root==NULL){
            return;
        }
        v.push_back(root->val);

        solve(root->left);
        solve(root->right);
        
    }
    
    
    int getMinimumDifference(TreeNode* root) {
        solve(root);
        sort(v.begin() , v.end());
        vector<int> ans;
        int minidiff=INT_MAX;
        
        for(int i=1;i<v.size();i++){
            int diff=v[i]-v[i-1];
            minidiff=min(diff , minidiff);
        }
        return minidiff;
    }
};