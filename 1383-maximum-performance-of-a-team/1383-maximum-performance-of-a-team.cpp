class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        vector<pair<int,int>> v;
        for(int i=0;i<speed.size();i++){
            v.push_back({efficiency[i],speed[i]});
        }
        sort(v.rbegin(),v.rend());
        priority_queue<int,vector<int>,greater<int>> pq;
        long long m=0,sum=0;;
        for(auto a: v){
            // m=min(a.second,m);
            sum+=a.second;
            pq.push(a.second);
            
            if(pq.size()>k) {sum-= pq.top(); pq.pop();}
            m=max(m,sum*a.first);
        }
        return m%1000000007;
    }
};