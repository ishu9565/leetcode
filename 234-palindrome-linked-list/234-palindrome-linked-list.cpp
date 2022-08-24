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
        if(!head||!head->next) return true;
        ListNode* pointer=head;
        int cnt=0;
        while(pointer){
            pointer=pointer->next;
            cnt++;
        }
        int t=cnt;
        cnt/=2;
        ListNode* curr=head;ListNode*prev=NULL;ListNode*nxt=NULL;
        
        while(cnt--){
            nxt=curr->next;
            curr->next= prev;
            prev=curr;
            curr=nxt;
        }
        head->next=curr;
        
        pointer=prev;
        ListNode* newhead=prev;
        
        if(t%2==0)
       { for(int i=0;i<t/2;i++) {
           // cout<<pointer->val<<endl;
                                 pointer=pointer->next;}
         while(pointer){
             // cout<<pointer->val<<endl;
             if(pointer->val!=newhead->val) return false;
             pointer=pointer->next; newhead=newhead->next;
         }
       
       }
        else{
         for(int i=0;i<=t/2;i++){
           // cout<<pointer->val<<endl;
                                 pointer=pointer->next;}
         while(pointer){
             if(pointer->val!=newhead->val) return false;
             pointer=pointer->next; newhead=newhead->next;
         }}
       
        return true;
    }
};