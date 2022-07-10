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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> answer;
        queue<TreeNode*> q;
        
        if(root==NULL)
            return answer;
        
        q.push(root);
        
        stack<vector<int>>s;
                
        while(!q.empty())
        {
            vector<int>ans;
            int len=q.size();
            
            while(len--)
            {
                TreeNode* temp=q.front();
                q.pop();
                ans.push_back(temp->val);
                
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);                
            }
            s.push(ans);
        }
        
        while(!s.empty())
        {
            answer.push_back(s.top());
            s.pop();
        }
        
        return answer;
    }
};