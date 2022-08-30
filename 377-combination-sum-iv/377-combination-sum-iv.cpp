class Solution {
public:

    int count(vector<int> nums,int target, vector<int>&dp){
        if(target<0) return 0;
            if(target==0)  {
                return 1;
          }
        if(dp[target]!=-1) return dp[target];
        int ans=0;
   for(int i:nums)
        {
           ans+= count(nums,target-i,dp);
        }
        return dp[target]=ans;;
    }
    
    int combinationSum4(vector<int>& nums, int target) {
        int ans=0;
        vector<int>dp(1000,-1);
        return  count(nums,target,dp);
        // return ans;
    }
};
