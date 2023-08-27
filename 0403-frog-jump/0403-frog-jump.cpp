class Solution {
public:
    bool canCross(vector<int>& stones) {
        
        
        unordered_map<int,unordered_set<int>>dp;
        
        dp[1]={1};
        
        for(int i=1;i<stones.size();i++)
        {
            for(auto it:dp[stones[i]])
            {
                dp[stones[i]+it].insert(it);
                dp[stones[i]+it+1].insert(it+1);
                dp[stones[i]+it-1].insert(it-1);
            }
        }
        return dp[stones.back()].size()!=0;
    }
    
};