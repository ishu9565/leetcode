class Solution {
public:
    
    int solve(vector<int> & nums, int k){
       unordered_map<int,int> mp;
        mp.clear();
        int ans=0;
        int j=0,i=0;
       while(j<nums.size()&&j<=i){
           if(i==nums.size()) break;
           if(mp.find(nums[i])==mp.end()) mp[nums[i]]=1;
           else  mp[nums[i]]++;
           
            // if(mp.size()<=k){
            //     ans+=i-j+1;
            //     i++;
            // }
            
                while(mp.size()>k){
                    mp[nums[j]]--;
                    if(mp[nums[j]]==0) mp.erase(nums[j]); j++; 
                }
                ans+=i-j+1;
                i++;
            }            
        
        // cout<<"ans ="<< ans<< endl;
        return ans;
    } 
    
     int subarraysWithKDistinct(vector<int>& nums, int k) {
       return ( solve(nums,k)- solve(nums,k-1));
    }
    
    
};