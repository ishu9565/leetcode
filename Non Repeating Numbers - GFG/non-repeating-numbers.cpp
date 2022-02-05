// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        int n=nums.size();
        int xo=0;
        for(int i: nums){
            xo^=i;
        }
       // cout<<xo<<endl;
        int rightmost_setbit=xo&~(xo-1);
        //cout<<rightmost_setbit;
        int x(0),y(0);
        for(int i:nums){
            if(i&rightmost_setbit){
                x^=i;
            }
            else{
                y^=i;
            }
           
        }
       // cout<<x<<" "<<y;
         vector<int>ans;
            ans.push_back(x);
            ans.push_back(y);
            sort(ans.begin(),ans.end());
            return ans;
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends