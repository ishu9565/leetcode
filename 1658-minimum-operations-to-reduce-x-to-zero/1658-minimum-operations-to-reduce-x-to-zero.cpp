class Solution {
public:
    
  int lenOfLongSubarr(vector<int> A, int N, int K)
{
 
    int i = 0, j = 0, sum = 0;
    int maxLen = INT_MIN;
   
    while (j < N) {
        sum += A[j];
        if (sum < K) {
            j++;
        }
        else if (sum == K) {
            maxLen = max(maxLen, j-i+1);
            j++;
        }
        else if (sum > K) {
            while (sum > K) {
                sum -= A[i];
                 i++;
            }
              if(sum == K){
              maxLen = max(maxLen, j-i+1);
            }
            j++;
        }
    }
    return maxLen;
}
 
    int minOperations(vector<int>& nums, int x) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum==x) return nums.size();
        else if(sum<x) return -1;
        else{
            if(lenOfLongSubarr(nums,nums.size(),sum-x)<0) return -1;
            else return nums.size()-lenOfLongSubarr(nums,nums.size(),sum-x);
        }
    }
};