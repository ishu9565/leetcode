class Solution {
public:
    vector<int> getRow(int r) {
        vector<int> v;
        v.push_back(1);
        if(r==0) return v;
        v.push_back(1);
        if(r==1) return v;
        for(int j=1;j<r;j++){
            vector<int> t;
            t=v;
            for(int i=0;i<v.size()-1;i++)
           { v[i+1]=t[i]+t[i+1];}
            v.push_back(1);
        }
         return v;
    }
};