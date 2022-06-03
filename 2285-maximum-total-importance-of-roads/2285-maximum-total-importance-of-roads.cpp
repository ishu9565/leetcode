class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        long long ans=0;
        unordered_map<long long,long long> m;
        unordered_map<long long,long long> ::iterator it;
        for(int i=0;i<n;i++){
            m[i]==0;
        }
        for(int i=0;i<roads.size();i++){
            m[roads[i][0]]++;
        }
        for(int i=0;i<roads.size();i++){
            m[roads[i][1]]++;
        }
       vector<pair<long long,long long>>p;
        for(it=m.begin();it!=m.end();it++){
            p.push_back({it->second,it->first});
         //   cout<<it->first<<" "<<it->second<<endl;
        }
        sort(p.begin(),p.end());
        for(int i=1;i<=p.size();i++){
            ans+=p[i-1].first*i;
        }
        return ans;
    }
};