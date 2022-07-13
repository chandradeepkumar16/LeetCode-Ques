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
    
   void LevelOrder(TreeNode* root,int k,vector<vector<int>>& nodes)
{
    if(root==NULL)return;
    if(k==nodes.size()){ nodes.push_back(vector<int>()); }
    
    nodes[k].push_back(root->val);
    LevelOrder(root->left,k+1,nodes);
    LevelOrder(root->right,k+1,nodes);
}
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>nodes;
    LevelOrder(root,0,nodes);
    return nodes;
    }
};