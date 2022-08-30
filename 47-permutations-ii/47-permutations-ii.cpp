class Solution {
public:
    
      void permut (vector<vector<int>> &res,int ind,vector<int> nums){
        if(ind==nums.size()-1){
            res.push_back(nums);
            return ;
        }
        for(int i=ind;i<nums.size();i++){
            if(ind!=i&&nums[ind]==nums[i]) continue;
            swap(nums[i],nums[ind]);
            permut(res,ind+1,nums);
            // swap(nums[i],nums[ind]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       vector<vector<int>> res;
        permut(res,0,nums);
        return res;
    }
};

// void recursion(vector<int> num, int i, int j, vector<vector<int> > &res) {
//         if (i == j-1) {
//             res.push_back(num);
//             return;
//         }
//         for (int k = i; k < j; k++) {
//             if (i != k && num[i] == num[k]) continue;
//             swap(num[i], num[k]);
//             recursion(num, i+1, j, res);
//         }
//     }
