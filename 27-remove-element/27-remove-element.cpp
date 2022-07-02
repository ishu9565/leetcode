class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size(),r,cnt=0;
        r=n-1;
         for(int i=0;i<n;i++){
            if(nums[i]==val){
                cnt++;}
         }
        for(int i=0;i<n-cnt;i++){
            if(nums[i]==val){
                while(r>0&&nums[r]==val){
                    r--;
                }
                
                {swap(nums[i],nums[r]); }
                r--;
            }
            if(i>=r) break;
         
        }
        for(int i=0;i<n;i++){
            // cout<<nums[i]<<" "<<endl;
        }
        return n- cnt;
    }
};