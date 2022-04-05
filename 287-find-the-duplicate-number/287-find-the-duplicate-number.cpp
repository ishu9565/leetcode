class Solution {
public:
   void print_array(vector<int>&ans ){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
       cout<<endl;
    }
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int i=0;
         for(i=0;i<n;i++){
         if( nums[abs(nums[i])]<0) return abs(nums[i]);
          nums[abs(nums[i])]=nums[abs(nums[i])]*-1;
            // if( nums[abs(nums[i])]<0)
            // print_array(nums);
        }
        for(i=0;i<n;i++)
        if(nums[i]>0) return i; 
      return -1;
    }
};