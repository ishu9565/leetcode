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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* dummy=new ListNode(0);
        ListNode* ans=dummy;
          int carry=0;
        int put;
        int sum;
        while(l1&&l2){
            sum=l1->val+l2->val+carry;
          
            if(sum<10){ carry=0; put=sum;}
            else {carry =1; put=sum%10;}
            ListNode* temp=new ListNode(0);
            dummy->next=temp;
            temp->val=put;
            dummy=dummy->next;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1){
            sum=l1->val+ carry;
            if(sum<10){ carry=0; put=sum;}
            else {carry =1; put=sum%10;}
             ListNode* temp=new ListNode(0);
            dummy->next=temp;
            temp->val=put;
            dummy=dummy->next;
             l1=l1->next;
        }
         while(l2){
            sum=l2->val+ carry;
            if(sum<10){ carry=0; put=sum;}
            else {carry =1; put=sum%10;}
             ListNode* temp=new ListNode(0);
            dummy->next=temp;
            temp->val=put;
            dummy=dummy->next;
             l2=l2->next;
        }
        if(carry>0){
            ListNode* temp=new ListNode(0);
            dummy->next=temp;
            temp->val=carry;
            dummy=dummy->next;
           
        }
        return ans->next;
    }
};