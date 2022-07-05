class Solution {
public:
    int countEven(int num) {
       int t=num,cnt=0;
        while(num>0){
            ;
            while(num){
                cnt+=num%10;
                num=num/10;
            }
           
        }
        if(cnt%2) return (t-1)/2;
          return (t)/2;
    }
};