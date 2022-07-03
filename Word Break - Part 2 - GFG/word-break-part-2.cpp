// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
     bool solve(string s, unordered_set<string>& st, int index, vector<vector<string>>& ans, vector<string>& curr) {
                
        int len = s.size();
        if(len == 0) return true;
        if(index>=len){
          ans.push_back(curr);  
          return true;  
        } 
        for(int i=index+1; i<=s.size(); i++) {
            if(st.count(s.substr(index, i-index))) {
                curr.push_back(s.substr(index, i-index));
                solve(s, st, i,ans,curr);
                
                curr.pop_back();
            }
        }
        return false;
    }
    
    vector<string> wordBreak(int t, vector<string>& dict, string s)
    {
       int n = s.size();
        unordered_set<string> st;
        for(string i : dict) {
            st.insert(i);
        }
        vector<vector<string>> ans;
        vector<string> curr ;
        solve(s, st, 0, ans, curr);
        for(int i=0; i<ans.size(); i++) {
            vector<string> v = ans[i];
            string ss;
            for(int j=0; j<v.size(); j++) {
                ss+=v[j]; 
                ss+=" ";
            }
            curr.push_back(ss);
            curr[i].pop_back();
        }
        return curr;}
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<string> dict;
        string s;
        cin>>n;
        for(int i = 0;i < n;i++){
            cin>>s;
            dict.push_back(s);
        }
        cin>>s;
        
        Solution ob;
        vector<string> ans = ob.wordBreak(n, dict, s);
        if(ans.size() == 0)
            cout<<"Empty\n";
        else{
            sort(ans.begin(), ans.end());
            for(int i = 0;i < ans.size();i++)
                cout<<"("<<ans[i]<<")";
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends