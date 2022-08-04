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
    vector<TreeNode*> helper( int l , int r){
        vector<TreeNode*> ans;
        if(l>r){
            ans.push_back(NULL);
            return ans;
        }
        
        for(int i=l;i<=r;i++){
            vector<TreeNode*> left = helper(l, i-1 );
            vector<TreeNode*> right = helper(i+1 , r);
            
            for(auto le:left){
                for(auto ri:right){
                    TreeNode* newnode = new TreeNode(i , le , ri);
                    ans.push_back(newnode);
                }
            }
        }
        return ans;
        
    }
    vector<TreeNode*> generateTrees(int n) {
        vector<TreeNode*> ans;
        
        if(n==0){
            return {};
        }
        return helper(1,n);
    }
};