class Solution {
public:
    double findMedianSortedArrays(vector<int>& n1, vector<int>& n2) {
        int m=n1.size();
        int n=n2.size();
        
        vector<int>v;
        
        int t1=0,t2=0;
        while(t1<m&&t2<n&&v.size()<m/2+n/2+2){
            if(n1[t1]<n2[t2]) {v.push_back(n1[t1]); t1++;}
            else {v.push_back(n2[t2]); t2++;}
        }
        if(t1==m){
            while(t2<n&&v.size()<m/2+n/2+2)
                {v.push_back(n2[t2]); t2++;}
        }
        else
        {
             while(t1<m&&v.size()<m/2+n/2+2)
                {v.push_back(n1[t1]); t1++;}
        }
       // cout<<m+n<<endl;
        if((m+n)%2==0){ return (v[(m+n)/2]+v[(m+n)/2 -1])*1.0/2*1.0;}
        else return v[(m+n)/2];
    }
};