class Solution {
public:
    
    int unique(int m, int n, vector<vector<int>>&dp){
        if(n<0||m<0) return 0;
        if(n==0||m==0) return 1;   
        if(dp[m][n]!=0) return dp[m][n];
         int left=unique(m-1,n,dp);
        int right=unique(m,n-1,dp);
        return dp[m][n]=left +right;
    }
    
    int uniquePaths(int m, int n) {
         vector<vector<int>> dp(m,vector<int>(n,0));
        return unique(m-1,n-1, dp);
    }
};