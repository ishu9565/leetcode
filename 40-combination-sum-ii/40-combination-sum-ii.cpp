class Solution {
public:
    void collectingcombinationsum(vector<int>& candidates,vector<vector<int>> &res, vector<int> &ds,int target,int ind){
        if(target==0) {res.push_back(ds);}
        
        for(int i=ind;i<candidates.size();i++){
            
            if(i>ind&&candidates[i]==candidates[i-1]) continue;
            if(target<0) return ;
            // currsum+=candidates[i];
            ds.push_back(candidates[i]);
            collectingcombinationsum(candidates,res,ds,target-candidates[i],i+1);
            // currsum-=candidates[i];
            ds.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end())  ;
        vector<vector<int>>res;
        vector<int> ds;
         collectingcombinationsum(candidates,res,ds,target,0);
        return res;
    }
};