class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size(),cnt=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]!=' '){
                while(s[i]!=' '&&i>=0){
                    // cout<<cnt<<endl;
                    cnt++;
                    i--;
                    if(i==-1) return cnt;
                }
                return cnt;
            }
        }
        return n;
    }
};