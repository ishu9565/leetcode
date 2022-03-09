class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>m;
        string ans="";
        int gg=1;
        int n=s.size();
        int len=s.size();
        for(auto a:t){
            m[a]++;
        }
        int count=m.size();
       // cout<<count<<endl;
        int i(0),j(0);
        for(j;j<=n;){
            
            if(count>0) {
                if(m.find(s[j])!=m.end())
                    {m[s[j]]--;if(m[s[j]]==0)count--;}
                
                j++;}
            if(count==0) {
                 if(m.find(s[i])!=m.end())
                  { 
                     if(m[s[i]]==0)count++; m[s[i]]++;}
                len=min(len,j-i);
                if(gg==1) {ans=s.substr(i,len); gg++;}
                // cout<<s.substr(i,len)<<endl;
               if(s.substr(i,len).size()<ans.size()) ans=s.substr(i,len);
                i++;}
           
            
        }
        
        
        return ans;
    }
};