class Solution {
public:
     int dp[10001]={0};
    int numSquares(int n) {
        if(n<=1) return max(0,n);
        if(dp[n]==0) {dp[n]=INT_MAX-1;
        
        for(int i=1;i*i<=n;i++){
            dp[n]=min(dp[n],numSquares(n-i*i)+1);
        }}
        return dp[n];
    }
};
