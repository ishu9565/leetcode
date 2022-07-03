class Solution {
public:
    int path(vector<vector<int>>& dp,vector<vector<int>>& grid,int i,int j){
        if(i<0||j<0) return 0;
        if(i==0&&j==0) return grid[i][j];
        int m=INT_MAX;
        if(dp[i][j]!=0) return dp[i][j];
        if(i>0){
            dp[i-1][j]=path(dp,grid,i-1,j);
            m=min(m,grid[i][j]+dp[i-1][j]);
        }
        if(j>0){
              dp[i][j-1]=path(dp,grid,i,j-1);
            m=min(m,grid[i][j]+dp[i][j-1]);
        }
        return m;
    }
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>> dp(grid.size(),vector<int>(grid[0].size(),0));        
        return path(dp,grid,grid.size()-1,grid[0].size()-1);
        
        
    }
};