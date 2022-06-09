class Solution {
public:
    int sm(vector<int> s){
        int su=0;
        for(int i=0;i<s.size();i++){
            su+=s[i];
        }
        return su;
    }
    
    int countServers(vector<vector<int>>& g) {
        int row=g.size(), clmn=g[0].size(), cnt=0;
         vector<vector<int>> temp(clmn,vector<int>(row,0));
        vector<vector<int>> r(row,vector<int>(clmn,0));
        int sum1=0,sum2=0;
         for(int i=0;i<g.size();i++){
            for(int j=0;j<g[i].size();j++){
                temp[j][i]=g[i][j];
            }            
        }
        
        for(int i=0;i<g.size();i++){
            
                sum1=sm(g[i]);
                
           // cout<<sum1<<" "<<sum2<<endl;
            for(int j=0;j<g[i].size();j++){
                sum2=sm(temp[j]);
                if((g[i][j]==1)&&(sum1>1||sum2>1)) r[i][j]=1;
            }            
        }
            
        for(int i=0;i<g.size();i++){
            for(int j=0;j<g[i].size();j++){
                if(r[i][j]==1)
                cnt++;
            }            
        }
        return cnt;
    }
};