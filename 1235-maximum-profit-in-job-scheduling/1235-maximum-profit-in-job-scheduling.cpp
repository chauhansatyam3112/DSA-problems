class Solution {
public:
    vector<int>v;
    
    int solve(int idx,vector<int>&dp,vector<vector<int>>&end)
    {
        if(idx>=end.size())return 0;
        
        if(dp[idx]!=-1)return dp[idx];
        
        int x1=0,x2=0;
        
        x1=solve(idx+1,dp,end);
        
        int index=lower_bound(v.begin(),v.end(),end[idx][1])-v.begin();
        
        x2= end[idx][2]+solve(index,dp,end);
        
        return dp[idx]=max(x1,x2);
    }
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        
        
         int n=profit.size(); 
        
        vector<vector<int>> offers;
        
        for(int i=0;i<n;i++){
            
            offers.push_back({startTime[i], endTime[i], profit[i]});
        }
        
        sort(offers.begin(), offers.end());
        
        for(int i=0;i<startTime.size();i++)v.push_back(offers[i][0]);
        
        vector<int> dp(n, -1);
        
        return solve(0, dp,offers);
    }
};