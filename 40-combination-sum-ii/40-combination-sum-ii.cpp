class Solution {
public:
    void collectingcombinationsum(vector<int>& candidates,vector<vector<int>> &res, vector<int> &ds,int target, int currsum,int ind){
         // cout<<currsum<<" ";
        if(currsum==target){
                res.push_back(ds);    
            }
        
        for(int i=ind;i<candidates.size();i++){
            if(i>ind&&candidates[i]==candidates[i-1]) continue;
            if(currsum>target) return ;
        currsum+=candidates[i];
        ds.push_back(candidates[i]);
        collectingcombinationsum(candidates,res,ds,target,currsum,i+1);
        currsum-=candidates[i];
        ds.pop_back();
        }
        // currsum+=candidates[ind];
        // ds.push_back(candidates[ind]);
        // collectingcombinationsum(candidates,res,ds,target,currsum,ind+1);
        // currsum-=candidates[ind];
        // ds.pop_back();
        // collectingcombinationsum(candidates,res,ds,target,currsum,ind+1);
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end())  ;
        vector<vector<int>>res;
        vector<int> ds;
         collectingcombinationsum(candidates,res,ds,target,0,0);
        return res;
    }
};