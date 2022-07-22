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
    ListNode* partition(ListNode* head, int x) {
        
        ListNode* ans= new ListNode(0);
         ListNode* res= ans;
          ListNode* ans1=head;
        while(ans1!=NULL){
            if(ans1->val<x){
                  ListNode* temp=new ListNode(ans1->val);
                ans->next=temp;
                ans=ans->next;   
                
            }
            ans1=ans1->next;
        }
        ans1=head;
         while(ans1!=NULL){
            if(ans1->val>=x){
                  ListNode* temp=new ListNode(ans1->val);
                ans->next=temp;
                ans=ans->next;                
            }
             ans1=ans1->next;
        }
      return res->next;  
    }
};