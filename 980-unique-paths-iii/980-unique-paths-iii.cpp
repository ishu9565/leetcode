class Solution {
public:
    int unique(vector<vector<int>>& grid,int d1,int d2,int t,int s){
        if(d1<0||d2<0||d1>=grid.size()||d2>=grid[0].size()||grid[d1][d2]==-1) return 0;
        
        if(grid[d1][d2]==2) {
            if(s==t) return 1;
            else return 0;
        }
        grid[d1][d2]=-1;
        
       int left(0),right(0),up(0),down(0),path;
         left=unique(grid,d1-1,d2,t,s+1);
         right=unique(grid,d1+1,d2,t,s+1);
         up=unique(grid,d1,d2+1,t,s+1);
         down=unique(grid,d1,d2-1,t,s+1);
  path=left +right+up+down;
        grid[d1][d2]=0;
        return path;
        
        
    }
    int uniquePathsIII(vector<vector<int>>& g) {
        int m=g.size(),n=g[0].size(),d1,d2,total(0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(g[i][j]==1) d1=i,d2=j;
                if(g[i][j]!=-1) total++;
            }
        }
        
       return( unique(g,d1,d2,total,1));
    }
    
    
};