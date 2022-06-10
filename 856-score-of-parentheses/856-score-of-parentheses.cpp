class Solution {
public:
    int scoreOfParentheses(string s) {
       stack<int> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
            st.push(s[i]);
            else if(s[i]==')'){
                int cnt=0;
                while(st.top()!='('){
                    st.pop();
                    cnt++;
                }
                if(cnt==0){
                    st.pop();
                    st.push('A');
                    continue;
                }
                st.pop();
                cnt=2*cnt;
                while(cnt--)
              {  st.push('A');}
            }
        }
        return st.size();
        
    }
};