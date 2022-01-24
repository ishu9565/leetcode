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
    ListNode* swapNodes(ListNode* head, int k) {
        
        ListNode* temp=head;
        ListNode* fast=head;
        ListNode* slow=head;
        int t=k;
       while(k---1&&fast->next){
           fast=fast->next;
       }
        int t1=fast->val;
        while(fast->next){
            fast=fast->next;
            slow=slow->next;
        }
        int t2=slow->val;
        slow->val=t1;
        while(t---1&&temp->next){
           temp=temp->next;
       }
        temp->val=t2;
        cout<<t1<<" "<<t2<<endl;
        return head;
    }
};