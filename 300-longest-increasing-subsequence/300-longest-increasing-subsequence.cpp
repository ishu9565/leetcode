class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,1);
        //dp[n-1]=1;
        int ans=0;
        for(int i=n-2;i>=0;i--){
            //dp[i]=1;
            for(int j=i+1;j<n;j++){
            if(nums[i]<nums[j]){
                dp[i]=max(dp[i],dp[j]+1);                
            }
             ans=max(ans,dp[i]);
            }
        }
          ans=max(ans,dp[0]);
        
        return ans;
    }
};