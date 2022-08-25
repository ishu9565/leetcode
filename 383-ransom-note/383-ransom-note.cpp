class Solution {
public:
    bool canConstruct(string ra, string ma) {
        unordered_map<int,int>mp;
        for(auto a: ma){
            mp[a]++;
        }
        for(auto a: ra){
            mp[a]--;
            if(mp[a]<0) return false;
        }
        return true;
    }
};