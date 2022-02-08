class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1) return 1;
        unordered_map<int,int> m;
        unordered_map<int,int> ::iterator it;
        int sz= trust.size();
        for(int i=0;i<sz;i++){
            m[trust[i][1]]++;
        }
        
        it=m.begin();
        for(it;it!=m.end();it++){
            if(m[it->first]==n-1){
                for(int i=0;i<sz;i++){
                    if(trust[i][0]==it->first)
                        break;                    
                    if(i==sz-1)
                        return it->first;
                } 
            }
        }
        return -1;
    }
};