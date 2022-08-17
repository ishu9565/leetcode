class Solution {
public:
    
    void bfs(vector<vector<char>>& grid,vector<vector<int>>& vis,int i, int j){
         int r=grid.size();
        int c=grid[0].size();
        vis[i][j]=1;
        queue<pair<int,int>>q;
        q.push({i,j});
        int q1[]={-1,0,1,0,-1};
        while(!q.empty()){
            int a1=q.front().first;
            int a2=q.front().second;
            q.pop();
            // cout<<a1<<" "<<a2<<"FFFFFFF"<<endl;
            for(int t=0;t<4;t++){
                int n1=a1+q1[t];
                int n2=a2+q1[t+1];
                // cout<<n1<<" "<<n2<<endl;
                if(n1>=0&&n2>=0&&n1<r&&n2<c&&vis[n1][n2]==0&&grid[n1][n2]=='1'){
                    vis[n1][n2]=1;
                    // cout<<n1<<" "<<n2<<endl;
                    q.push({n1,n2});
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        
        vector<vector<int>> vis(r,vector<int> (c,0));
        int cnt=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(vis[i][j]==0&&grid[i][j]=='1'){
                    cnt++;
                    // cout<<i<<" "<<j<<endl;
                    bfs(grid,vis,i,j);
                }
            }
        }
        return cnt;
    }
};