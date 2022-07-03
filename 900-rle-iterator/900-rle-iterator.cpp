class RLEIterator {
public:
   long long r=0;
    vector<long long> t;
    RLEIterator(vector<int>& e) {
        long long sum=e[0];
        for(int i=0;i<e.size();i++){
            t.push_back(e[i]);
        }
        for(int i=2;i<t.size();i=i+2){
            sum+=t[i];
            t[i]=sum;
        }
    }
    long long i=0;
    int next(int n) {
        // cout<<r<<endl;
        r=r+n;
        if(i>=t.size() ) return -1;
        while(r>t[i]){
            i=i+2;
            if(i>=t.size() ) return -1;
        }
        return t[i+1];
    }
};

/**
 * Your RLEIterator object will be instantiated and called as such:
 * RLEIterator* obj = new RLEIterator(encoding);
 * int param_1 = obj->next(n);
 */