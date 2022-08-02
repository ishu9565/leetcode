class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int>pq;
        for(auto a:matrix){
            for(auto b: a){
                pq.push(b);
                if(pq.size()>k)pq.pop();
            }
        }

        return pq.top();
    }
};