class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int n=nums.size();
        int t1=0,t2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0)
                t1++;
            if(nums[i]==1) t2++;
        }
        for(int i=0;i<n;i++){
            if(i<t1) nums[i]=0;
            else if(i<t2+t1) nums[i]=1;
            else nums[i]=2;
        }
    }
};