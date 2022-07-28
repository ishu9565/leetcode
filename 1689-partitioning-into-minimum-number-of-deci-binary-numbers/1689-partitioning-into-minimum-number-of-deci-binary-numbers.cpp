class Solution {
public:
    int minPartitions(string n) {
        int m=0;
        for(auto a: n){
            m=max(m,(a-'0'));
        }
        return m;
    }
};