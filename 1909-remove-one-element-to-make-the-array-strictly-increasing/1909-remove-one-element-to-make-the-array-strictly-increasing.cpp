class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
       int n=nums.size();
        if(n==2 )return true;
        int cnt=1;
        vector<int>v;
        v=nums;
        sort(v.begin(),v.end());
        if(v==nums ) {
            for(int i=0;i<n-1;i++){
                if(v[i]==v[i+1]) return false;
            }
            return true;
        }
        for(int i=0;i<n-1;i++){
            if(nums[i]<nums[i+1]) cnt++;
            
        }
        cout<<cnt<<endl;
        if(cnt!=n-1) return false;
       // cout<<"R"<<endl;
        for(int i=0;i<n-2;i++){
            if(nums[i]>nums[i+1]&&i!=0)
            {
                if(nums[i+1]<=nums[i-1]&&nums[i]>=nums[i+2]) return false;
            }
        }
        return true;
    }
};