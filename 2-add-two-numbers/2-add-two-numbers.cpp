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
string findSum(string str1, string str2)
{
    // Before proceeding further, make sure length
    // of str2 is larger.
    if (str1.length() > str2.length())
        swap(str1, str2);
 
    // Take an empty string for storing result
    string str = "";
 
    // Calculate length of both string
    int n1 = str1.length(), n2 = str2.length();
 
    // Reverse both of strings
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
 
    int carry = 0;
    for (int i=0; i<n1; i++)
    {
        // Do school mathematics, compute sum of
        // current digits and carry
        int sum = ((str1[i]-'0')+(str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
 
        // Calculate carry for next step
        carry = sum/10;
    }
 
    // Add remaining digits of larger number
    for (int i=n1; i<n2; i++)
    {
        int sum = ((str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
 
    // Add remaining carry
    if (carry)
        str.push_back(carry+'0');
 
    // reverse resultant string
    reverse(str.begin(), str.end());
 
    return str;
}
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        string s1="",s2="";
        while(l1){
            s1+=to_string(l1->val);
            l1=l1->next;
        }
        while(l2){
            s2+=to_string(l2->val);
            l2=l2->next;
        }
        reverse(s1.begin(),s1.end());
         reverse(s2.begin(),s2.end());
        string s3=findSum(s1,s2);
        reverse(s3.begin(),s3.end());
        int n=s3.size();
        ListNode* ans= new ListNode(0);
         ListNode* res= ans;
        int i=0;
        //cout<<s3<<endl;
        while(n--){
            ListNode* temp=new ListNode(0);
            ans->next=temp;
            temp->val=s3[i]-'0';
           // cout<<ans->val<<" "<<s3[i]-'0'<<" " <<i<<endl;
            ans=ans->next;
            i++;
        }
        return res->next;
        
    }
};