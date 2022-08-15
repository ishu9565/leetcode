class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& f, int src, int dst, int k) {
        vector<int> old(n,1e7);
        old[src]=0;
        for(int i=0;i<=k;i++){
            vector<int> nw=old;
            for(int j=0;j<f.size();j++){

                nw[f[j][1]]=min(old[f[j][0]]+f[j][2],nw[f[j][1]]);
                
            }
            old=nw;
        }
        if(old[dst]>=1e7)
            return -1;
        return old[dst];
        
    }
};