// { Driver Code Starts
// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        stack<int> st;
        for(int i=0;i<S.size();i++){
            if(S[i]=='+'||S[i]=='-'||S[i]=='*'||S[i]=='/')
            st.push(S[i]);
            else
            st.push(S[i]-'0');
            if(st.top()=='+'||st.top()=='*'||st.top()=='/'||st.top()=='-')
            {
                char ch=st.top();
                st.pop();
                int t1=st.top();
                st.pop();
                int t2=st.top();
                st.pop();
                int t3;
                if(ch=='+')
                 t3= t1+t2; 
                else  if(ch=='-')
                 t3= t2-t1; 
                else  if(ch=='*')
                 t3= t1*t2; 
                else  if(ch=='/')
                 t3= t2/t1; 
                st.push(t3);
               // cout<<st.top()<<endl;
            }
        }
        return st.top();
    }
};

// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}
  // } Driver Code Ends