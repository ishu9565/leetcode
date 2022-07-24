class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> pq;
        vector<int>ans;
        for(auto a: arr){
            pq.push({abs(a-x),a});
            if(pq.size()>k) pq.pop();
        }
        for(int i=0;i<k;i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;        
    }
};