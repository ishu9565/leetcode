class Solution {
public:
    int fac(int n){
        if(n==1||n==0) return 1;
        return n*fac(n-1);
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
    vector<vector<int>> v;
        int n=fac(nums.size());
        while(n--){
            v.push_back(nums);
            next_permutation(nums.begin(),nums.end());
        }
        return v;
    }
};