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
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> ans;
        
        while(head!=NULL){
            ans.push_back(head->val);
            head=head->next;
        }
        int j=ans.size()-1;
        for(int i=0;i<ans.size()/2;i++){
            if(ans[i]!=ans[j]){
                return false;
            }else{
                j--;
            }
        }
        return true;
        
    }
};