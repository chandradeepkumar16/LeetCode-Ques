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
    
    bool check(ListNode* head , int k){
        
        while(k--){
            
            
            if(head==NULL) return false;
            
            head=head->next;
        }
        return true;
        
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(!check(head ,k)){
            return head;
        }
        
        ListNode  *prev=NULL , *curr=head , *nextnode=NULL;
        int cnt=0;
        while(curr!=NULL && cnt++<k){
            nextnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextnode;
            
        }
        head->next = reverseKGroup(nextnode , k);
        
        return prev;
        
    }
};