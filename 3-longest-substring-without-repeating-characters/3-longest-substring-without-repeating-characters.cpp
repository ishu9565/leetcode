class Solution {
public:
    
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>m;
        vector<char>v;
        int ans=0;
        for(auto a: s){
            v.push_back(a);
            //cout<<a<<endl;
             m[a]++;
            if(m[a]>1) {
                while(true){
                     m[v[0]]--;
                    if(v[0]==a)
                    {v.erase(v.begin());
                    
                    break;
                    }
                    else v.erase(v.begin());
                    
                }
            }
            int t=v.size();
            ans=max(ans,t);
            // for( auto g: v){
            //     cout<<g<<" ";
            // }cout<<endl;
        }
      return ans;  
        
    }
};