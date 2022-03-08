class Solution {
public:
    int reverse(int x) {
        int flag=0;
        if(x<0) flag=1;
        string str= to_string(x),s("");
        for (int i=str.length()-1; i>=0; i--)
      s+=str[i]; 
        if(s[s.size()-1]=='-') s.erase(s.size()-1);
        long long ans=0;
        for(int i=0;i<s.size();i++){
            ans+=s[i]-'0';
            ans*=10;
        }
        ans=ans/10;
        if(flag==1) ans=-1*ans;
        if(ans>INT_MAX) return 0;
        else if(ans<INT_MIN) return 0;
        else return ans;
        
    }
};