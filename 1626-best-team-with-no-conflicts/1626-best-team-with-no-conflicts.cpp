class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        vector<pair<int,int>>v;
//         for(int i=0;i<scores.size();i++)
//         {
//             v.push_back({scores[i],ages[i]});
            
//         }
//         int i=1;
//         int ans=0;
//         sort(v.begin(),v.end());
//         for(auto it:v)
//         {
//             auto itr=v.begin()+i;
           
//             if(it.second<=itr->second){
//                 ans+=it.first;}
            
       
           
//             if(itr==v.end()-1&& itr->second>=it.second){
//                 ans+=itr->first;
//                 break;
//             }
//             i++;
            
            
//         }
//         return ans;
        vector<pair<int, int>> players;
        int n = scores.size();
        for (int i=0; i<n; i++) {
            players.push_back({ages[i], scores[i]});
        }
        sort(players.begin(), players.end(), greater<>());
        
        int ans = 0;
        vector<int> dp(n);
        for (int i=0; i<n; i++) {
            int score = players[i].second;
            dp[i] = score;
            for (int j=0; j<i; j++) {
                if (players[j].second >= players[i].second) { 
                    dp[i] = max(dp[i], dp[j] + score);
                }
            }
            ans = max(ans, dp[i]);
        }
        return ans;
        
    }
};