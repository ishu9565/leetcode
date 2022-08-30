class Solution {
public:
    
    int find_min(vector<int>& coins,vector<vector<int>> &dp,int amount,int ind){
        if(amount==0) return 0;
        if(amount<0||ind<0) return INT_MAX-1;;
        if(dp[ind][amount]!=-1) return dp[ind][amount];
        int r= 1+find_min(coins,dp,amount-coins[ind],ind);
        int l= find_min(coins,dp,amount,ind-1);
       
        dp[ind][amount]=min(l,r);
        return dp[ind][amount];
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>> dp(coins.size()+1,vector<int>(amount+1,-1));
        int ans=find_min(coins,dp,amount,coins.size()-1);
        if(ans<INT_MAX-1) return ans;
        else return -1;
     
    }
};