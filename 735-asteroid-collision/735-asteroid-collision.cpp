class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        vector<int> v;
        for(int i=0;i<a.size();i++){
            if(v.size()==0||a[i]>0||a[i]*v.back()>0)
                v.push_back(a[i]);
            else if(v.back()<=-a[i]){
                
                if(v.back()==-a[i])
               { v.pop_back(); continue;}
              i--;
                v.pop_back();
            }
        }
        return v;
    }
};