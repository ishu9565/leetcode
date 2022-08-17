class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=n-1;
       for(int i=0;i<n;i++){
           if(nums[i]<=0||nums[i]>n)nums[i]=n+1;
       }
        
        for(int i=0;i<n;i++){
            if(abs(nums[i])>=n+1) continue;;
            nums[abs(nums[i])-1]=-1*abs(nums[abs(nums[i])-1]);
        }
        for(int i=0;i<n;i++){
            if(nums[i]>0) return i+1;
        }
        return n+1;
    }
};