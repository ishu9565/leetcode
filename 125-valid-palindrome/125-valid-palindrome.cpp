class Solution {
public:
    bool isPalindrome(string su) {
        int n=su.size();
        transform(su.begin(), su.end(), su.begin(), ::tolower);
      
        string s="";
        for(int i=0;i<n;i++){
            if((su[i]<='z'&&su[i]>='a')||isdigit(su[i]))
                s+=su[i];
        }
          int l=0,r=s.size()-1;
        while(l<r){
            if(s[l]!=s[r]) return false;
            l++,r--;
        }
        return true;
    }
};