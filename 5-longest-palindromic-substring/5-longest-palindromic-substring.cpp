class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int dp[n][n];
        int max_length=0;
        int start=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                dp[i][j]=0;
                max_length=1;
                start=i;
            }
        }
         for(int i=0;i<n;i++){
          dp[i][i]=1;
        }
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
               { dp[i][i+1]=1;
               start=i;}
                 max_length=2;
            }
        }
        
        for(int i=2;i<n;i++){
            for(int j=0;j<n-i;j++){
                
                
                if(s[j]==s[j+i]&&dp[j+1][j+i-1]){
                    {dp[j][j+i]=1;
                    max_length=i+1;
                    start=j;}
                }
            }
        }
        // cout<<max_length;
     return s.substr(start,max_length);   
    }
};