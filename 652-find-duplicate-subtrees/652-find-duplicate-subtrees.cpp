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
    string helper(TreeNode* root , unordered_map<string , int> &um ,vector<TreeNode*> &v){
        
        if(!root) return " ";
        
        string str = "(";
        str+= helper(root->left , um , v);
        str+=to_string(root->val);
        str+=helper(root->right , um , v);
        str+=")";
        
        if(um.find(str)==um.end()){
            um.insert({str , 1});
        }
        if(um[str]==2){
            v.push_back(root);
        }
        
        um[str]++;
        return str;
        
        
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        
        if(!root){
            return { };
        }
        
        unordered_map<string,int> um;
        vector<TreeNode*> v;
        string x=helper(root , um , v);
        return v;
    }
};