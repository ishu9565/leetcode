class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        reverse(deck.begin(),deck.end());
        vector<int> ans;
        int n=deck.size();
        ans.push_back(deck[0]);
        for(int i=1;i<n;i++){
            int t=ans[ans.size()-1];
            ans.pop_back();
            ans.insert(ans.begin(), t);
             ans.insert(ans.begin(), deck[i]);
            // for(int i=0;i<ans.size();i++) cout<<ans[i]<<" "; cout<<endl;
        }
        return ans;
    }
};