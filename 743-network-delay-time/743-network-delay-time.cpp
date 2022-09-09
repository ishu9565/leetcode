class Solution {
public:
    #define ip pair<int,int>
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int> dist,vis;
        for(int i=0;i<n+1;i++){ dist.push_back(INT_MAX); vis.push_back(0);}
        vector<vector<pair<int,int>>> graph(n+1);
        
        for(auto a: times){
            graph[a[0]].push_back({a[1],a[2]});
        }
        priority_queue<ip,vector<ip>,greater<ip>> pq;
        pq.push({0,k});
        dist[k]=0;
        
        while(!pq.empty()){
            int n_cost=pq.top().first;
            int node=pq.top().second;
            pq.pop();
            // if (dist[node] < n_cost) continue; 
            vis[node]=1;
            for(auto a: graph[node]){
                if(vis[a.first]==1) continue;
                
                    if(dist[a.first]>dist[node]+a.second){
                        dist[a.first]=dist[node]+a.second;
                        pq.push({dist[a.first],a.first});
                    }
               
            }    
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            cout<<dist[i]<<" ";
            int a=dist[i];
            ans=max(ans,a);
            if(a==INT_MAX) return -1;
        } return ans;
        
        
    }
};