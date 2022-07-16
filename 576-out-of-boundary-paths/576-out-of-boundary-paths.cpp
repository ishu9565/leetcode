class Solution {
public:
    
      int dp[55][55][55];
    
    long long ans = 1e9 + 7;
    
    int out(vector<vector<int>> &v,int move,int sr,int sc){
        if(sr<0||sc<0||sr>v.size()-1||sc>v[0].size()-1){  return 1 ;}
        // if(v[sr][sc]==-1) return ;
        // else v[sr][sc]=-1;
        
        
        if(move<=0) return 0;
        
         if(dp[sr][sc][move] != -1)
            return dp[sr][sc][move];
        return dp[sr][sc][move] = (out(v,move-1,sr+1,sc)%ans+ out(v,move-1,sr-1,sc)%ans+out(v,move-1,sr,sc-1)%ans+out(v,move-1,sr,sc+1)%ans)%ans;
      
    }
    int findPaths(int m, int n, int maxMove, int sr, int sc) {
        vector<vector<int>> v(m,vector<int>(n,0));
           memset(dp, -1, sizeof(dp));
       return  out(v,maxMove,sr,sc)%ans;
        // return ans%(1000000007);
                
    }
};