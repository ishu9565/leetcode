class Solution {
public:
    int count(int amount, vector<int> &coin,vector<vector<int>>&dp,int ind){
        if(amount<0) return 0;
        if(ind==coin.size())return 0;
        if(amount==0) return 1;
        
        
        if(dp[amount][ind]!=-1) return dp[amount][ind];
       int l= count(amount-coin[ind],coin,dp,ind);
       int r= count(amount,coin,dp,ind+1);
        return dp[amount][ind]=l+r;
    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>>dp(5001,vector<int>(301,-1));
      return count(amount,coins,dp,0);
        
    }
};