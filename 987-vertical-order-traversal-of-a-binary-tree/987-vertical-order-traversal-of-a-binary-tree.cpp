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
     map<int, map<int, multiset<int>>> mp;
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        mp.clear();
        cal(root, 0, 0);
        vector<vector<int> > ans;
        for(auto m : mp) {
            vector<int> v;
            for(auto mm : m.second) {
                for(auto num : mm.second) {
                    v.push_back(num);
                }
            }
            ans.push_back(v);
        }
        return ans;
    }
    void cal(TreeNode *root, int x, int y) {
        if(!root) return;
        mp[y][x].insert(root->val);
        cal(root->left, x+1, y-1);
        cal(root->right, x+1, y+1);
    }
};