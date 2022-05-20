class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        
        int cur=arr[0];
        int cnt=0,n=arr.size();
        for(int i=1;i<n;i++){
            if(cur<arr[i]){
                cur=arr[i];
                cnt=0;
            } 
            if(++cnt==k){
            break;
        }
        }
       return cur; 
    }
};