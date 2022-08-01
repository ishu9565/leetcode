class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix[0].size()-1,c=0,m=matrix.size();
        
        while(r>=0&&c<m){
            if(matrix[c][r]==target ) return true;
            else if(matrix[c][r]>target){
                r--;
            }
            else{
                c++;
            }
           
        }
        return false;
    }
};