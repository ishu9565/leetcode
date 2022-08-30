class Solution {
public:
    
    void permut (vector<vector<int>> &res,int ind,vector<int> nums){
        if(ind==nums.size()){
            res.push_back(nums);
            return ;
        }
        
        for(int i=ind;i<nums.size();i++){
            swap(nums[i],nums[ind]);
            permut(res,ind+1,nums);
            // swap(nums[i],nums[ind]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        permut(res,0,nums);
        return res;
    }
};