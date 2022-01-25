class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        for(auto &it:nums){
            if(it==1)cnt++;
        }
        if(cnt<2)return 0;
        int ans=1e5+1;
        int cn=0;
        for(int i=0;i<cnt-1;i++){
            if(nums[i]==0)cn++;
        }
       // cout<<cn<<endl;;
        for(int i=cnt-1;i<n;i++){
            if(nums[i]==0)cn++;
            ans=min(ans,cn);
            if(nums[i-cnt+1]==0)cn--;
        }
        for(int i=0;i<cnt-1;i++){
            if(nums[i]==0)cn++;
            ans=min(ans,cn);
            if(nums[n-(cnt-i-1)]==0)cn--;
        }
        return ans;
    }
};