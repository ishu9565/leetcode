class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l1=0,l2=n-1;
        int ans=0;
        while(l1<l2){
            ans=max(ans,(l2-l1)*min(height[l1],height[l2]));
            if(height[l1]>height[l2])
                l2--;
            else
                l1++;
        }
        return ans;
    }
};