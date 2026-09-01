class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<int,int> mp;
        for(char x:text) {
          mp[x]++;
        } 

        
        int ans=INT_MAX;
        ans=min(ans,mp['b']/1);
        ans=min(ans,mp['a']/1);
        ans=min(ans,mp['l']/2);
        ans=min(ans,mp['o']/2);
        ans=min(ans,mp['n']/1);
     return ans; 
    }
};