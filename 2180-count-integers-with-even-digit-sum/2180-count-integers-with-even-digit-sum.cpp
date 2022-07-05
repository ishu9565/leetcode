class Solution {
public:
    int countEven(int num) {
       int cnt=0;
        while(num>0){
            int s=0,t=num;
            while(t){
                s+=t%10;
                t=t/10;
            }
            if(s%2==0) {cnt++;}
            num--;
        }
        return cnt;
    }
};