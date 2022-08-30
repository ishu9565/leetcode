class Solution {
public:
    
    void CollectingAllCombinationSum(int ind,vector<int>& candidates, int target,vector<vector<int>> &res,vector<int> &ds, int CurrSum){
        if(CurrSum>target) return ;
       if(ind==candidates.size()){ 
           if(CurrSum==target){
            res.push_back(ds);}
            return ;
       }
        // cout<<CurrSum<<" "<<ind<<" ";
        CurrSum+=candidates[ind];
        ds.push_back(candidates[ind]);
        CollectingAllCombinationSum(ind,candidates,target,res,ds,CurrSum);
        CurrSum-=candidates[ind];
        ds.pop_back();
        CollectingAllCombinationSum(ind+1,candidates,target,res,ds,CurrSum);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int>ds;
        CollectingAllCombinationSum(0,candidates, target,res,ds,0);
            return res;
    }
};