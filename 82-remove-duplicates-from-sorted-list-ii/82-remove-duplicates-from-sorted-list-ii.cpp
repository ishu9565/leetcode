
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL||head->next==NULL) return head;
        unordered_map<int,int>m;
        ListNode *temp=head;
        while(temp)
        {
            m[temp->val]++;
            temp=temp->next;
        }  
//          ListNode* newhead = new ListNode(-1);
//         ListNode* prev = newhead;
//         newhead->next = head;
        
//         while(head && head->next)
//         {
//             if(head->val==head->next->val)
//             {
//                 while(head->next && head->val==head->next->val)
//                 {
//                     head=head->next;
//                 }
//                 head=head->next;
//                 prev->next = head;
//             }
//             else
//             {
//                 prev=head;
//                 head=head->next;
                    
//             }
//         }
//         return newhead->next;
        
        
        ListNode* newnode= new ListNode(-1);
        ListNode* ans=newnode;
        while(head){
            if(m[head->val]==1){
                ListNode* temp= new ListNode(head->val);
                newnode->next=temp;
                newnode=newnode->next;
            }
            head=head->next;
        }
        return ans->next;
    }
};