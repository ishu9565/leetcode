class Solution {
public:
         int dp[100][100];    
    int unique(vector<vector<int>>& o,int x,int y) {
        
        if(x<0||y<0) return 0;
        if(x==0&&y==0&&o[x][y]!=1) return 1;
        if(o[x][y]==1) return 0;
        if(dp[x][y]!=0) return dp[x][y];
        int left=unique(o,x-1,y);
        int right=unique(o,x,y-1);
        return dp[x][y]=left +right;
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& o) {
        int m=o.size()-1,n=o[0].size()-1;
      
      return  unique(o,o.size()-1,o[0].size()-1);
        
    }
    
    int uniquePaths(int m, int n) {
        vector<vector<int>>o(m,vector<int>(n));
         for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            o[i][j]=0;
        }
    }
       return  uniquePathsWithObstacles(o);
    }
};