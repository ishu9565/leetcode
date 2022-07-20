class Solution {
public:
    
     bool isSubsequence(string s, string t) {
        int ex= t.find(s[0]);
        if(s.size()==t.size()) {
            if(s==t) return true;
            else return false;
        }
        for(int i=1;i<s.size();i++){
            
            if(t.find(s[i],ex+1)!=string::npos)
                ex=t.find(s[i],ex+1);
            else 
                return false;
        }
        
        
        return true;
    }
    int numMatchingSubseq(string s, vector<string>& words) {
        int ans=0;
        
        for( auto a: words){
            if(isSubsequence(a,s)) ans++;
        }
        return ans;
    }
};