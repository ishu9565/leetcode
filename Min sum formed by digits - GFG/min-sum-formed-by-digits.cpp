// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    long long int minSum(int arr[], int n)
    {
        sort(arr,arr+n);
        if(n==1) return arr[0];
        string s1="",s2="";
        for(int i=0;i<n;i++){
            if(i%2)
            s1+=(arr[i]+'0');
            else
            s2+=(arr[i]+'0');
        }
        long long int a1=stol(s1),a2=stol(s2);
        return a1+a2;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.minSum(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends