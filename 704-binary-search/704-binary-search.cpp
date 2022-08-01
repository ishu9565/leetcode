class Solution {
public:
    int search(vector<int>& nums, int target) {
       int n=nums.size();
        int r=n-1,l=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) l=mid+1;
            else r=mid-1;
        }
        return -1;
    }
};