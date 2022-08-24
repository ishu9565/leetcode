class Solution {
public:
    bool isPowerOfThree(int n) {
         if(n <= 0){
            return false;
        }
        double d = log10(n)/log10(3);
        return ceil(d) == floor(d) ? true : false;
    }
};