class Solution {
public:
    int ladderLength(string bw, string ew, vector<string>& v) {
        unordered_map<string,int>mp;
        for(auto a: v){
            mp[a]++;
        }
        int op=0;
        queue<string> q;
        q.push(bw);
        string temp="abcdefghijklmnopqrstuvwxyz";
        while(!q.empty()){
            
            int t=q.size();
            op++;
            // cout<<q.size()<<endl;
            for(int k=0;k<t;k++){
            string s=q.front();
            q.pop();
            mp.erase(s);
            if(s==ew) return op;

            mp.erase(s);
            for(int i=0;i<s.size();i++){
                char c=s[i];
                for(int j=0;j<26;j++){
                    if(temp[j]==c) continue;
                    s[i]=temp[j];
                    if(mp.find(s)!=mp.end())
                        q.push(s);
                }
                s[i]=c;
                
            }
            }
        }
        return 0;
    }
};