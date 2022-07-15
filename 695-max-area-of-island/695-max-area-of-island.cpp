class Solution {
public:
    
    void dfs(vector<vector<int>>& grid,int i,int j,int &cnt){
        if(i<0||j<0||i>grid.size()-1||j>grid[0].size()-1||grid[i][j]==0) return ;
    
        grid[i][j]=0;
        cnt++;
        dfs(grid,i+1,j,cnt);
        dfs(grid,i-1,j,cnt);
        dfs(grid,i,j-1,cnt);
        dfs(grid,i,j+1,cnt);
        
    }    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int ans=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                
                if(grid[i][j]==1){
                    int cnt=0;
                dfs(grid,i,j,cnt);
                    ans=max(ans,cnt);
                }
                // 
            }
        }
        // for(int i=0;i<row;i++){
        //     for(int j=0;j<col;j++){
        //        cout<<grid[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        return ans;
    }
};