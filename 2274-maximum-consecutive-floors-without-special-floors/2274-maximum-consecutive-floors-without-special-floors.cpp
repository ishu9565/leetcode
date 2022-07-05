class Solution {
public:
    int maxConsecutive(int b, int t, vector<int>& s) {
        sort(s.begin(),s.end());
        s.push_back(t+1);
        reverse(s.begin(),s.end());
            s.push_back(b-1);
        reverse(s.begin(),s.end());
        int ans=0;
        for(int i=0;i<s.size()-1;i++){
            s[i]=s[i+1]-s[i];
            cout<<s[i]<<" ";
            ans=max(ans,s[i]);
        }
        return ans-1;
        
    }
};