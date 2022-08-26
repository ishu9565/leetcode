class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map<int,int> m;
        int ans=0;
        for(auto a: time){
           int t=a%60;
            if(t==0)
           ans+=m[0];
           else
           ans+=m[60-t];
            m[t]++;
        }
        
        return ans;
    }
};