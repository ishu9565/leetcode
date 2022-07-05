class Solution {
public:
    int nthUglyNumber(int n) {
        vector<long long>v1,v2,v3,v4,v5,v6,v7,v8;
        long long a=2;
        long long p=1;
        while(a<9223372036854775807/2){
            v1.push_back(a);
            v8.push_back(a);
            p=a;
            a=a*2;
        } a=3; 
        while(a<9223372036854775807/3){
            v2.push_back(a);
             v8.push_back(a);
             p=a;
            a=a*3;
        }
        a=5;
        while(a<9223372036854775807/5){
            v3.push_back(a);
             v8.push_back(a);
             p=a;
            // cout<<a<<" ";
            a=a*5;
        }
        for(int i=0;i<v1.size();i++){
            for(int j=0;j<v2.size();j++){
                if(v1[i]>9223372036854775807/v2[j]) continue;
                v4.push_back(v1[i]*v2[j]);
                 v8.push_back(v1[i]*v2[j]);
            }
        }
        for(int i=0;i<v3.size();i++){
            for(int j=0;j<v2.size();j++){
                if(v3[i]>9223372036854775807/v2[j]) continue;
                // cout<<v2[j]<<" "<<v3[i]<<" ";
                v5.push_back(v2[j]*v3[i]);
                 v8.push_back(v2[j]*v3[i]);
            }
        } 
        for(int i=0;i<v1.size();i++){
            for(int j=0;j<v3.size();j++){
                if(v1[i]>9223372036854775807/v3[j]) continue;
                v6.push_back(v1[i]*v3[j]);
                 v8.push_back(v1[i]*v3[j]);
            }
        }
         for(int i=0;i<v2.size();i++){
             for(int j=0;j<v6.size();j++){
                 if(v6[j]>9223372036854775807/v2[i]) continue;
                v7.push_back(v2[i]*v6[j]);
              v8.push_back(v2[i]*v6[j]);
        }}
        v8.push_back(1);
        // cout<<v8.size()<<endl;
        sort(v8.begin(),v8.end());
        // cout<<v8[0]<<" "<<v8[1];
     for(int i=1510;i<1550;i++){
         cout<<v8[i]<<" ";
     }
        return v8[n-1];
        
    }
};