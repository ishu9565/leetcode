class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        
        vector<int>dist(n+1,INT_MAX);
        // vector<vector<pair<int,int>>> graph(n+1);
        // for(auto a:times){
        //     graph[a[0]].push_back({a[1],a[2]});
        // }
        dist[k]=0;
        for(int i=1;i<=n;i++){
            
            for(auto &a: times){ 
                if(dist[a[0]]!=INT_MAX && dist[a[1]]>dist[a[0]]+a[2]){
                    // cout<<"D"<<" ";
                 dist[a[1]]=dist[a[0]]+a[2];
                }
            }
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            // cout<<dist[i]<<" ";
            ans=max(dist[i],ans);
        }
        if(ans==INT_MAX) return -1;
            return ans;
    }
};