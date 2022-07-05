class Solution {
public:
    int minimumSum(int num) {
        string s=to_string(num);
        sort(s.begin(),s.end());
        string x="";x.append(1, s[0]);x.append(1, s[2]);
        cout<<x;
        int a =stoi(x);
        x=""; x.append(1, s[1]);x.append(1, s[3]);
        int b=stoi(x);
        return a+b;
        
    }
};