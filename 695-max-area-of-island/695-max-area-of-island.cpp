class Solution {
        private :
 void going_island(vector<vector<int>>& g,int i, int j,int &cnt){
       int r=g.size(),c=g[0].size();
       if(i<0||i==r||j<0||j==c|| g[i][j]==0){
           return ;
       }
     cnt++;
       g[i][j]=0;
       going_island(g,i-1,j,cnt);
       going_island(g,i+1,j,cnt);
       going_island(g,i,j-1,cnt);
       going_island(g,i,j+1,cnt);
   };
public:
    int maxAreaOfIsland(vector<vector<int>>& g) {
        
          int r=g.size(),c=g[0].size(),ans=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(g[i][j]==1){
                  //  cnt++;
                    int cnt=0;
                    going_island(g,i,j,cnt);
                    ans=max(ans,cnt);
                }
            }
        }
        return ans;    
    }
};