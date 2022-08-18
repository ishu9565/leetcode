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
    #define Node ListNode
    ListNode* reverseList(ListNode* head) {
        if(!head||!head->next) return head;
        Node* curr= head;
        Node* pre(NULL), *nxt(NULL);
        while(curr!=NULL){
            nxt=curr->next;
            curr->next=pre;
            pre=curr;
            curr=nxt;
        }        
        return pre;
    }
};