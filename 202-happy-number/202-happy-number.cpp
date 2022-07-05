class Solution {
public:
    bool isHappy(int n) {
        int t=n;int r=100;
        while(r){
            // cout<<n<<endl;
            t=n;
            int s=0;
            while(n>0){
                s+=(n%10)*(n%10);
                n=n/10;
            }
            
            if(t==s&&s!=1) return false;
            else if(t==s) return true;
           n=s;
            r--;
        }
        return false;
    }
};