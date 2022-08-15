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
#define Node ListNode
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* p=NULL,*q=NULL,*curr=head;
        
        if(head==NULL||head->next==NULL) return head;
        while(curr!=NULL){
            q=curr->next;
            curr->next=p;
            p=curr;
            // p->next=q;
            curr=q;
        }
        return p;
        
        
    }
};