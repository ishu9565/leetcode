class Solution {
public:
    
    vector <vector <int>> res;
    
    void solve(vector <int> &nums,int ind){
        if(ind==nums.size()){
            res.push_back(nums);
            return;
        }
        
        for(int i=ind;i<nums.size();i++){
            swap(nums[ind],nums[i]);
            solve(nums,ind+1);
            swap(nums[ind],nums[i]);
        }
    }
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        solve(nums,0);
        return res;
    }
};