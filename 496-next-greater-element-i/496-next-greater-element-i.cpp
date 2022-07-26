class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        int n=nums2.size();
        vector<int>ans;
        for(int i=n-1;i>=0;i--){
            if(st.size()==0) ans.push_back(-1);
            else if(st.top()>nums2[i]) ans.push_back(st.top());
            else if(st.top()<=nums2[i]){
                while(st.size()>0&&st.top()<=nums2[i]) st.pop();
                if(st.size()==0) ans.push_back(-1);
                else  ans.push_back(st.top());
            }
            st.push(nums2[i]);
        }
        reverse(ans.begin(),ans.end());
        // cout<<nums2.size()<<" "<<ans.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[nums2[i]]=ans[i];
            // cout<<nums2[i]<<" "<<ans[i]<<endl;
            
        }
        vector<int> res;
        for(auto a: nums1){
            res.push_back(m[a]);
        }
        return res;
    }
};