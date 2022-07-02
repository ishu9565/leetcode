class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> m;
        m['I']=1,m['V']=5,m['X']=10,m['L']=50,m['C']=100,m['D']=500,m['M']=1000;
        
        reverse(s.begin(),s.end());
        char c=s[0];
        // cout<<s[0]<<endl;
        int ans=0;
        for(int i=0;i<s.size();i++){
            
            int t=max(m[s[i]],m[c]);
             // cout<<s[i]<<" "<<c<<endl;
             if(m[s[i]]>=t)
               {  ans+=m[s[i]];
               c=s[i];}
            else
                ans-=m[s[i]];
            
           
        }
        return ans;
    }
};