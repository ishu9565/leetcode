class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // string s="";
        // for(auto a: nums){
        //     s+=(to_string(a));
        // }
        next_permutation(nums.begin(),nums.end());
        // for(int i=0;i<s.size();i++){
        //     nums[i]=(s[i]-'0');
        // }
    }
};