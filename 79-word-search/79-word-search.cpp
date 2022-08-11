class Solution {
public:
    int l,r;
    bool dfs(vector<vector<char>>& board,vector<vector<int>>& vis, string &word,int i, int j){
        if(word.size()==0) return true;
        if(i<0||j<0||i>l-1||j>r-1||board[i][j]!=word[0]) return false;
        // cout<<"D"<<endl;
        if(vis[i][j]==0) return false;
        vis[i][j]=0;
        string s=word.substr(1);
      
        bool ans=(dfs(board,vis,s, i-1,j)||dfs(board,vis,s, i+1,j)||dfs(board,vis,s, i,j-1)||dfs(board,vis,s, i,j+1)) ;
        vis[i][j]=-1;
        return ans;        
    }
    bool exist(vector<vector<char>>& board, string word) {
         l=board.size(),r=board[0].size();
        vector<vector<int>> vis(l,vector<int>(r,-1));
        for(int i=0;i<l;i++){
            for(int j=0;j<r;j++){
                   if( dfs(board,vis,word, i,j)== true) return true;
            }
        }
       return false;
        
    }
};