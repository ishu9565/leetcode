class Solution {
public:
    void combination(vector<vector<int>> &res,vector<int>&ds,vector<int>&arr,int k,int ind){
        if(ind==arr.size()) {
             if(ds.size()==k){
            res.push_back(ds);
        }
            return ;
        }
       
        ds.push_back(arr[ind]);
        combination(res,ds,arr,k,ind+1);
        ds.pop_back();
        combination(res,ds,arr,k,ind+1);
    }
    vector<vector<int>> combine(int n, int k) {
         vector<vector<int>> res;
        vector<int >ds;
        vector<int>arr;
        for(int i=0;i<n;i++) arr.push_back(i+1);
        combination(res,ds,arr,k,0);
        return res;
        
    }
};