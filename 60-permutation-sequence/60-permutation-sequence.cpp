class Solution {
public:
    string getPermutation(int n, int k) {
        string s="";
        k=k-1;
        vector<char>v;
        for(int i=1;i<=n;i++) v.push_back(i+'0');
        long long fact=1;
        for(int i=1;i<n;i++){
            fact*=i;
        }
        for(int i=0;i<n;i++){
            s+=v[k/fact];
            v.erase(v.begin()+k/fact);
            k=k%fact;
            if(n-i-1!=0)
            fact=fact/(n-i-1);
        }
        return s;
    }
};