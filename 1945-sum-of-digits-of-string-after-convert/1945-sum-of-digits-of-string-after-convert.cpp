class Solution {
public:
    int getLucky(string ss, int k) {
        string s="";
        int ans=0;
        for(int i=0;i<ss.size();i++){
            int rr=ss[i]&31;
              int r=0;
            while(rr){
                r+=rr%10; rr=rr/10;
            }
            ans+=r;
            cout<<r<<" ";
        }cout<<endl;cout<<ans<<endl;
        int t=ans;
        
        while(k---1){
            t=ans;
            int r=0;
            while(t){
                r+=t%10; t=t/10;
            }
            ans=r;
        }
        return ans;
    }
};