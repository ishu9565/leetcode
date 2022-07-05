class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto a: nums)
        {
            m[a]++;
        }
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]-1]==0){
                int r=nums[i];
                int cnt=1;
                while(m[r+1]){
                    cnt++;
                    r++;
                }
                ans=max(ans,cnt);
            }
        }
        return ans;
    }
};