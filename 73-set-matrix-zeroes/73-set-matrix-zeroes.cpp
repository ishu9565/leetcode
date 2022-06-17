class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size(),colmn=matrix[0].size();
        vector<int>r1(row,0),c1(colmn,0);
    //     for(int i=0;i<)
    // int r1[row]={0},c1[colmn]={0};
    for(int i=0;i<row;i++){
        for(int j=0;j<colmn;j++){
            if(matrix[i][j]==0)
            {
                r1[i]=1; c1[j]=1;
            }
        }
    }
     for(int i=0;i<row;i++){
        for(int j=0;j<colmn;j++){
            if(r1[i]==1||c1[j]==1)
               matrix[i][j]=0;
        }
    }	
    }
};