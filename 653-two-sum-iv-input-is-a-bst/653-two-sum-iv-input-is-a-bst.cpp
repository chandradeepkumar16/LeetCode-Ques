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
    
    void solve(TreeNode* root , vector<int>&v){
        
        if(root==NULL) return;
        
        solve(root->left , v);
        v.push_back(root->val);
        solve(root->right , v);
        
        
    }
    
    bool findTarget(TreeNode* root, int k) {
        vector<int> v;
        solve(root , v);
        
        int i=0;
        int j=v.size()-1;
        int sum=0;
        while(i<j){
            sum=v[i]+v[j];
            if(sum==k) return true;
            if(sum>k) j--;
            else if(sum<k) i++;
        }
        return false;
        
        
    }
};