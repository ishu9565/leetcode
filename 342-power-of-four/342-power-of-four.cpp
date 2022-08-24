class Solution {
public:
    bool isPowerOfFour(int n) {
       return ceil(log10(n)/log10(4))-floor(log10(n)/log10(4))==0;
        // return false;
    }
};