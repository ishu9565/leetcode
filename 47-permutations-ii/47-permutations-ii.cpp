class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        
        vector<int>temp;
        temp=nums;
        ans.push_back(nums);
        next_permutation(nums.begin(),nums.end());
        while(nums!=temp){
            ans.push_back(nums);
        next_permutation(nums.begin(),nums.end());
        }
        return ans;
    }
};