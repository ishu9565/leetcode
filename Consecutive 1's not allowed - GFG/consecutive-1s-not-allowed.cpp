// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

 // } Driver Code Ends
//User function template for C++
#define mod 1000000007
class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
	    ll zero=1,one=1;
    for(int i=2;i<=n;i++){
        ll zero_old=zero;
        zero=(zero%mod+one%mod)%mod;
        one=zero_old;
    }
    return (zero%mod+one%mod)%mod;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends