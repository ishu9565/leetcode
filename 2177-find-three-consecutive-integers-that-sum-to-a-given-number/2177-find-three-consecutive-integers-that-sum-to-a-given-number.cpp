class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long> v;
        if(num%3!=0) return v;
        else num=num/3;
        return{num-1,num,num+1};
        
    }
};