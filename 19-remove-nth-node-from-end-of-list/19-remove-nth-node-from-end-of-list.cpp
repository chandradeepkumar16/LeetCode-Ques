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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=0;
        ListNode* temp=head;
        ListNode* dummy=head;
        
        while(dummy!=NULL){
            len++;
            dummy=dummy->next;
        }
        
        if(len-n==0) return temp->next;
        
        for(int i=0;i<len-n-1;i++){
            head=head->next;
        }
        
        if(head->next->next!=NULL){
            head->next=head->next->next;
        }else{
            head->next=NULL;
        }
        
        return temp;
        
        
        
    }
};