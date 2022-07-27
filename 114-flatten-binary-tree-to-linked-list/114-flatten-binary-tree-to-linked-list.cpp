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
    TreeNode* temp=NULL;
    void flatten(TreeNode* root) {
        if(root==NULL || root==0){
            return;
        }
        flatten(root->right);

        flatten(root->left);
        
        root->left=NULL;
        root->right=temp;
        temp=root;
        
        
    }
};