class Solution {
public:
      vector<string> generateParenthesis(int n) {
        vector<string > ans;
        string s="";
        check(ans,s,n,0);
        return ans;
    }
       void check(vector<string> &ans,string s, int n, int score){
        if(score<0) return;
        if(s.size()>2*n) return;
        if(score==0&&s.length()==2*n) ans.push_back(s);
        check(ans,s+"(",n,score+1);
        check(ans,s+")",n,score-1);
           return;
    }
  
    
 
    
};