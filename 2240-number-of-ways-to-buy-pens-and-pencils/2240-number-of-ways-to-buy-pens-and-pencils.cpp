class Solution {
public:
    long long waysToBuyPensPencils(int ttl, int c1, int c2) {
        
        long long way=0;
        long long r =ttl/c1;
        for(int i=0;i<=r;i++){
            long long sum=ttl;
            sum=sum-c1*i;
            way+=(sum/c2+1);
            // cout<<way<<endl;
        }
        return way;
    }
};