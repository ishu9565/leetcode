class Solution {
public:
    string maxValue(string n, int x) {
        
        if(n[0]=='-'){
             for(int i=0;i<n.size();i++){
                if((n[i]-'0')>x) { n.insert(i, to_string(x)); return n;}
            }
             
           
            
        }
        else{
            for(int i=0;i<n.size();i++){
                if((n[i]-'0')<x) { n.insert(i, to_string(x)); return n;}
            }
            //   n.insert(i, n); 
            // return n;
        }
       n+=(to_string(x));
           return n;
    }
};