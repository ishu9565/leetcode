class Solution {
public:
    int countVowelStrings(int n) {
        vector<int> v(5,1); int ans=0;
        for(int i=2;i<=n;i++){
            for(int j=4;j>0;j--){
                v[j-1]=v[j]+v[j-1];
            }
        }
        for(int i=0;i<5;i++){
            ans+=v[i];
        }
        return ans;
    }
};