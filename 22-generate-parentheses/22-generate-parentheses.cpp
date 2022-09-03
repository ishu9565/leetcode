class Solution {
public:
    
    bool isvalid(string s){
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') cnt++;
            if(s[i]==')') cnt--;
            if(cnt<0) return false;
        }        
        return true;
    }
    vector<string> generateParenthesis(int n) {
        string s="";
        vector<string > ans;
        for(int i=0;i<n;i++){
            s+="()";
        }
        sort(s.begin(),s.end());
        do{
            if(isvalid(s)) ans.push_back(s);
        }
        while(next_permutation(s.begin(),s.end()));
            return ans;
    }
};