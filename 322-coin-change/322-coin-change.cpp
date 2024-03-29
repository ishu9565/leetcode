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
        vector<int> dp(amount+1,INT_MAX-1);
        dp[0]=0;
        for(int i=1;i<=amount;i++){
            for(int j=0;j<coins.size();j++){
                if(i>=coins[j]){
                    dp[i]=min(dp[i],1+dp[i-coins[j]]);
                }
            }
        }
        if(dp[amount]>=INT_MAX-1) return -1;
        else return dp[amount];
     
    }
};