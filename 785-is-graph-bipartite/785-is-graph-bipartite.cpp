class Solution {
public:
    bool ans;
    
    void bip(vector<vector<int>> &adj, vector<int > &col, int u, int c){
        col[u]=c;
        
        for(auto a: adj[u]){
            if(col[a]==-1) bip(adj,col,a,1-c);
            if(col[a]==c) { ans= false; return ;}
        }
    }
    
    bool isBipartite(vector<vector<int>>& adj) {
        int n=adj.size();
        ans=true ;
        vector<int>col(n,-1);
        
        for(int i=0;i<n;i++){
            if(col[i]==-1) bip(adj,col,i,0);
        }
        return ans;
        
        
    }
};