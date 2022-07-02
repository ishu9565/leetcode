class Solution {
public:
    
    bool check(string a, string b,int t){
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i+t]) return false;
        }
        return true;
    }
    int strStr(string a, string b) {
        if(b.size()==0) return 0;
        if(a.size()<b.size()) return -1;
        for(int i=0;i<a.size();i++){
            if(b[0]==a[i]&&(b.size()<=a.size()-i)) {
                if(check(b,a,i)) return i;
            }
        }
        return -1;
    }
};