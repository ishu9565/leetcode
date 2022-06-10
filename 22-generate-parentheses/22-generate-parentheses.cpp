class Solution {
public:
    bool check_valid(string s){
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push('(');}
                else{
                    if(st.size()==0) return false;
                    else if(st.top()==')') return false;
                        
                    else
                        st.pop();
                
            }
        }
        if(st.size()==0) return true;
        else return false;
        
    }
    vector<string> generateParenthesis(int n) 
    {
        vector<string>res;
        string s="";
        for(int i=0;i<n;i++){
            s+="()";
        }
        res.push_back(s);
      string g= s;
          next_permutation(s.begin(),s.end());
        while(g!=s){
             if(check_valid(s)) 
                 res.push_back(s);
             next_permutation(s.begin(),s.end());
        }
        return res;
    }
    
};