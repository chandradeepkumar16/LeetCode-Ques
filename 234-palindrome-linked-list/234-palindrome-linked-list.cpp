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
    
    ListNode* getmid(ListNode* head){
        
        
        ListNode* fast=head->next;
        ListNode* slow=head;
        
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    
    
    ListNode* rev(ListNode* head){
        
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        
        
        while(curr!=NULL){
            
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
            
        return prev;

    }
    
    
    bool isPalindrome(ListNode* head) {
        
        ListNode* middle=getmid(head);
        
        ListNode* temp=middle->next;
        middle->next = rev(temp);
        
        ListNode* h1=head;
        ListNode* h2=middle->next;
        
        while(h2!=NULL){
            if(h1->val !=h2->val){
                return false;
            }
            h1=h1->next;
            h2=h2->next;
            
        }
        return true;
        
        
        
    }
};