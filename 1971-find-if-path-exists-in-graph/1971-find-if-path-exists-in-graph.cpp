class Solution {
public:
    
    bool DFS(vector<vector<int>> &adj,vector<bool> &visited,int dest, int strt)
{
    if(visited[strt]==true) return false;
        if(strt==dest) return true;
        visited[strt]=true;
   
    for (int i=0; i < adj[strt].size(); ++i)
      { 
       if( DFS(adj,visited,dest,adj[strt][i])) return true;}
        return false;
       
      }
    bool validPath(int n, vector<vector<int>>& edges, int src, int dest) {

        vector <vector<int>> adj(n);
        for(auto p: edges){
            adj[p[0]].push_back(p[1]);
            adj[p[1]].push_back(p[0]);
        }
        
        vector<bool> visited(n,false);
        for(int i=0;i<n;i++){
            if(i==src&&DFS(adj,visited,dest,i)) return true;
        }
        return false;
    }
};