class Solution {
public:
    #define A nums
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=n-1;
       for(int i=0;i<n;i++){
           if(nums[i]<0||nums[i]>n)nums[i]=0;
       }
        
        for(int i=0;i<n;i++){
           while(A[i] > 0 && A[i] <= n && A[A[i] - 1] != A[i])
                swap(A[i], A[A[i] - 1]);

        }
         
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1) return i+1;
        }
        
        return n+1;
    }
};