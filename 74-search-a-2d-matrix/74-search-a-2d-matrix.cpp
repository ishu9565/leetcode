class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int val) {
        int n=nums.size(),m=nums[0].size();
        int r=n*m-1,l=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            int mid_val=nums[mid/m][mid%m];
            if(mid_val==val) return true;
            else if(mid_val>val){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return false;
        
    }
};