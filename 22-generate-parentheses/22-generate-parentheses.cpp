class Solution {
public:
    vector<string > ans;
       void check(string s, int n, int score){
        if(score<0) return;
        if(s.size()>2*n) return;
        if(score==0&&s.length()==2*n) ans.push_back(s);
        check(s+"(",n,score+1);
        check(s+")",n,score-1);
           return;
    }
    vector<string> generateParenthesis(int n) {
        
        string s="";
        check(s,n,0);
        return ans;
    }
    
 
    
};