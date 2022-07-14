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
    int ind=0;
    TreeNode* helper(vector<int>& preorder ,vector<int>& inorder , int s , int end){
        if(s>end){
            return NULL;
        }
        
        TreeNode* node = new TreeNode(preorder[ind++]);
        int pos;
        
        for(int i=s;i<=end;i++){
            if(inorder[i]==node->val){
                pos=i;
                break;
            }
        }
        
        node->left=helper(preorder , inorder , s , pos-1);
        node->right=helper(preorder , inorder , pos+1 , end );
        return node;
    }
    
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        return helper(preorder , inorder , 0 , inorder.size()-1);
        
        
    }
};