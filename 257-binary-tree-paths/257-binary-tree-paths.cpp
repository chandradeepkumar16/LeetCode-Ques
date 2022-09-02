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
    #define pi pair<TreeNode* , string>
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths;

        if(!root) return paths;
        queue<pi> q;
        q.push({root, ""});
        
        while(!q.empty()){
            
            pi p =q.front();
            q.pop();
            
            // int size=q.size();
            TreeNode* temp=p.first;
            string str=p.second;
            
            if(!temp->left && !temp->right){
                
                str+=to_string(temp->val);
                paths.push_back(str);
                
            }else{
                str+=to_string(temp->val);
                str+="->";
                if(temp->left) q.push({temp->left , str});
                if(temp->right) q.push({temp->right , str});
            }
            
            
        }
        sort(paths.begin() , paths.end());
        return paths;
        
    }
};