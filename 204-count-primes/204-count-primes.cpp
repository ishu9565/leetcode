class Solution {
public:
    int prime[5000001]={0};
    int countPrimes(int n) {
        int cnt=0;
             for(int i=2;i*i<=n;i++){
                 if(prime[i]!=true){
                     for(int j=i*i;j<n;j+=i){
                         prime[j]=1;
                         // cout<<j<<" ";
                     }
                 }
             }
        for(int i=2;i<n;i++){
            if(prime[i]==0) cnt++;
        }
        return cnt;
    }
};