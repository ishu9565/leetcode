class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string s=to_string(n);
         sort(s.begin(),s.end());
        if(ceil(log2(n))==floor(log2(n))) return true;
        if(s[0]!='0') {
            int t=stoi(s);
            
               if(ceil(log2(t))==floor(log2(t))) return true;}
        // cout<<s<<endl;
        while(next_permutation(s.begin(),s.end())){
            // cout<<s<<endl;
            if(s[0]=='0') continue;
            int t=stoi(s);
            
               if(ceil(log2(t))==floor(log2(t))) return true;
        }
        return false;
    }
};