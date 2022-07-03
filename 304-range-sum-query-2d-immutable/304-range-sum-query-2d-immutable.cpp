class NumMatrix {
public:
    int dp[200][200];
    NumMatrix(vector<vector<int>>& matrix) {
      int a=matrix.size(),b=matrix[0].size();
         for(int i=0;i<a;i++){
             
            for(int j=0;j<b;j++){
                dp[i][j]=0;}}
        int t=0;
         for(int i=0;i<a;i++){
             
            for(int j=0;j<b;j++){
                
               dp[i][j]=matrix[i][j]+t;
                 t=dp[i][j];
                // cout<<dp[i][j]<<" ";
            }
             t=0;
             // cout<<"\n";
        }
    }
    
    int sumRegion(int y1, int x1, int y2, int x2) {
        int sum=0;
        for(int i=y1;i<=y2;i++){
           if(x1>=1){
               sum+=dp[i][x2]-dp[i][x1-1];
           }
            else{
                sum+=dp[i][x2];
            }
        }
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */