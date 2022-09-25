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
    
    vector<vector<int>> res;
    int sum=0;
    
    
    void solve(TreeNode *root , int tsum , vector<int> path){
        
        path.push_back(root->val);
        tsum+=root->val;
        
        
        
        if(!root->left && !root->right){
            if(tsum==sum){
            res.push_back(path);
        }
        }
        
        
        else {
            if(root->left){
            solve(root->left , tsum , path);
        }
            if(root->right){
                solve(root->right,tsum ,path);
            }
        }
        
        
        
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        if(!root){
            return res;
        }
        
        vector<int> path;
        sum=targetSum;
        solve(root, 0 , path);
        return res;
        
    }
};