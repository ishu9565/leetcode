class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map<long long,long long> m;
        long long ans=0;
        for(auto a: time){
            m[a%60]++;
        }
        for(int i=1;i<30;i++){
            if(m.find(60-i)!=m.end()&&m.find(i)!=m.end()){
                ans+=m[60-i]*m[i];
            }
        }
        if(m.find(0)!=m.end()){
            ans+=m[0]*(m[0]-1)/2;
        }
         if(m.find(30)!=m.end()){
            ans+=m[30]*(m[30]-1)/2;
        }
        return ans;
    }
};