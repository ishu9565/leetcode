class Solution {
    private :
 void erase_island(vector<vector<char>>& g,int i, int j){
       int r=g.size(),c=g[0].size();
       if(i<0||i==r||j<0||j==c|| g[i][j]=='0'){
           return ;
       }
       g[i][j]='0';
       erase_island(g,i-1,j);
       erase_island(g,i+1,j);
       erase_island(g,i,j-1);
       erase_island(g,i,j+1);
   };
 
public:
     
    int numIslands(vector<vector<char>>& g) {
        
        int r=g.size(),c=g[0].size(),cnt=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(g[i][j]=='1'){
                    cnt++;
                    erase_island(g,i,j);
                }
            }
        }
        return cnt;        
    }
};
