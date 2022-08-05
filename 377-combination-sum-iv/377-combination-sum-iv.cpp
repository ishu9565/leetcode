class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
         double  dp[target + 1];
        for(int i=0;i<target+1;i++) dp[i]=0;
        dp[0] = 1;
        for (int i = 1; i <= target; i++) {
            for (int n : nums) {
                if (i >= n) {
                    dp[i] +=  dp[i - n];
                }
            }
        }
        return dp[target];
    }
};
