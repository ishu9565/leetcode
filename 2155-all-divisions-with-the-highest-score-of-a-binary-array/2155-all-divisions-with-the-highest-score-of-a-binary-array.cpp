class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
         vector< pair<int,int>>p;
        int n=nums.size(); 
         vector<int>ans;
           int cnt1=0,cnt0=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1) cnt1++;
            }
        p.push_back({cnt1,0});
        
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                cnt0++;
            }
            else
                cnt1--;
          p.push_back({cnt0+cnt1,i+1});
        }
         int f=0;
        for(int i=0;i<=n;i++){
            f=max(f,p[i].first);
        }
         int c=f; 
        for(int i=n;i>=0;i--){
            if(p[i].first==c)
            ans.push_back(p[i].second);
           
        }
            //m[i+1]=cnt0+cnt1;
        
       // unordered_map<int,int> m;
       // unordered_map<int,int> :: iterator it;
       // m[0]=cnt1;
       // it=m.begin();
       // for(it;it!=m.end();it++ ){
       //     p.push_back({it->second,it->first}); }
        
          // cout<<f<<endl;
       
     //   if(nums[0]==1&&nums.size()==1) return {0};
   //   if( nums.size()==2)  {if(nums[0]==1&&nums[1]==1) return {0};}
   //  if(ans.size()==1&&ans[0]==1) return {0};
        return ans;
    }
};