class Solution {
public:
    string addBinary(string a, string b) {
        string t1=a; reverse(t1.begin(),t1.end());
        string t2=b; reverse(t2.begin(),t2.end());
        string sum="";
        int c=0;
        int t=min(t1.size(),t2.size());
        int i;
        for( i=0;i<t;i++){
            int p=t1[i]-'0';
            int q=t2[i]-'0';
            if((p+q+c)==3) {sum=sum+"1"; c=1;}
            else if(p +q+c==2) {sum+="0"; c=1;}
            else if((p +q+c)==1) {sum+="1"; c=0;}
            else {sum+="0"; c=0;}
            // cout<<sum<<endl;
        }
        while(i<t1.size()){
            if((c+(t1[i]-'0'))==2) {sum+="0"; c=1;}
            else if((c+(t1[i]-'0'))==1){ sum+="1"; c=0;}
            else {sum+="0"; c=0;}
            i++;
              // cout<<sum<<endl;
        }
         while(i<t2.size()){
            if((c+(t2[i]-'0'))==2) {sum+="0"; c=1;}
            else if((c+(t2[i]-'0'))==1){ sum+="1"; c=0;}
               else {sum+="0"; c=0;}
            i++;
               // cout<<sum<<endl;
        }
        if(c==1) sum+="1";
        reverse(sum.begin(),sum.end());
        return sum;
        
    }
};