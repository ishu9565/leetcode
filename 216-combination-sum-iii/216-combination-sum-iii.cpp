class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int target) {
        vector<int>candidates;
        for(int i=1;i<=9;i++){
            candidates.push_back(i);
        }
        std::sort(candidates.begin(), candidates.end());
        std::vector<std::vector<int> > res;
        std::vector<int> combination;
        combinationSum2(candidates, target, res, combination, 0,k);
        return res;
    }
    void combinationSum2(std::vector<int> &candidates, int target, std::vector<std::vector<int> > &res, std::vector<int> &combination, int begin,int k) {
        if (!target) {
            if(combination.size()==k)
            res.push_back(combination);
            return;
        }
        for (int i = begin; i != candidates.size() && target >= candidates[i]; ++i)
            if (i == begin || candidates[i] != candidates[i - 1]||true) {
                combination.push_back(candidates[i]);
                combinationSum2(candidates, target - candidates[i], res, combination, i + 1,k);
                combination.pop_back();
            }
    }
};