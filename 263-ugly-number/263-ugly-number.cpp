class Solution {
public:
    bool isUgly(int n) {
        if(n<=0) return false;
        while(n>1){
            int r=n;
            if(r%2==0) r=r/2;
            if(r%3==0) r=r/3;
            if(r%5==0) r=r/5;
            if(r==n) return false;
            else n=r;
        }
        return true;
    }
};