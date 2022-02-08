class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
       int n=100000;
        vector<int> ans(n+1,0);
        for(int i=0;i<edges.size();i++){
            ans[edges[i][0]]++;
           ans[edges[i][1]]++;
        }
        for(int i=1;i<=n;i++){
            if(ans[i]==edges.size()) return i;
        }
        return 5;
    }
};