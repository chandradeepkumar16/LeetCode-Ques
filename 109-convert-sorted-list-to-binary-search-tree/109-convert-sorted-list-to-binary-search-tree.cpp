/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    
    
    TreeNode* solve(vector<int>&nums , int start , int end){
        
        if(start>end){
            return NULL;
        }
        
        int mid=(start+end)/2;
        TreeNode* node = new TreeNode(nums[mid]);
        node->left = solve(nums , start , mid-1);
        node->right = solve(nums , mid+1 , end);
        
        return node;
            
        
    }
    
    TreeNode* sortedListToBST(ListNode* head) {
        
        ListNode* dummy = head;
        vector<int> v;
        
        while(dummy!=NULL){
            v.push_back(dummy->val);
            dummy = dummy->next;
        }
        
        // sort(v.begin() , v.end());
        
        return solve( v , 0 , v.size()-1);
        
    }
};