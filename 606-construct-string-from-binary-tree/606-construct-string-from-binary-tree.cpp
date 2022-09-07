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
        string tree2str(TreeNode *root) {
        string str="";

        dfs(root, str);
        return (str);
    }

    void dfs(TreeNode *root, string &str) {

        str +=to_string(root->val);

        if (root->left && !root->right) {
            str += "(";
            dfs(root->left, str);

            str += ")";
        }

        if (!root->left && root->right) {
            str += "()(";
            dfs(root->right, str);
            str += ")";
        }

        if (root->left && root->right) {
            str += "(";
            dfs(root->left, str);
            str += ")(";
            dfs(root->right, str);
            str += ")";
        }
    }
};