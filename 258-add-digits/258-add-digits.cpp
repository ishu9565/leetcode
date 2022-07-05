class Solution {
public:
    int addDigits(int num) {
        if(num<10) return num;
        
        while(num>=10){
            int s=0;
            int t=num;
            while(num){
                s+=num%10;
                num=num/10;
            }
            num=s;
        }
        return num;
    }
};