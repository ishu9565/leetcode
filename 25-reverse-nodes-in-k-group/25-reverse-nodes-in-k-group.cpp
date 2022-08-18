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
    ListNode* reverseKGroup(ListNode* head, int k) {
        static Node* ans;
        int g=0;
        if(!head||!head->next) return head;
        Node* curr= head;
        Node* pre(NULL), *nxt(NULL);
        int cnt=0;
         while(curr!=NULL){
            cnt++;
             curr=curr->next;
        }  
       
        curr=head;
         if(cnt<k) return curr;
       //  while(cnt-k>=0)
       // { 
            Node* dummy=curr;
            int r=k;
        while(r--&&curr!=NULL){
            
            nxt=curr->next;
            curr->next=pre;
            pre=curr;
            curr=nxt;
        } 
            g++;
            
            dummy->next=reverseKGroup(curr,k);
        ans=pre;
            // if(g==1)
            
        // cnt-=k;}   
        return ans;
        
    }
};