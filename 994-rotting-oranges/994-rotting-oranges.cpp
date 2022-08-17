class Solution {
public:
    
     int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<pair<int,int>,int>>q;
         
        int r=grid.size();
        int c=grid[0].size();
         int vis[r][c];
         int q1[]={1,0,-1,0};
        int q2[]={0,1,0,-1};
        int ans=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==2)
                 { q.push({{i,j},0});
                vis[i][j]=2;}
            
            else{
                vis[i][j]=0;
            }
        }}
         int level=0;
         while(!q.empty()){
          
            int a1=q.front().first.first;
            int a2=q.front().first.second;
            int temp=q.front().second;
             level=max(level,temp);
            q.pop();
            for(int i=0;i<4;i++){
                int ni=a1+q1[i];
                int nj=a2+q2[i];
                if(ni<r&&nj<c&&ni>=0&&nj>=0&&vis[ni][nj]!=2&&grid[ni][nj]==1){
                    {  
                   vis[ni][nj]=2;
                    q.push({{ni,nj},temp+1});}
                    }
                }
            // cout<<level<<endl;
                    
            }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(vis[i][j]!=2&&grid[i][j]==1)
                 return -1;
            }
        }
        
        return level;
    }
};