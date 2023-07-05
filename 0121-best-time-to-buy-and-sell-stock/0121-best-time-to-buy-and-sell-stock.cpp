class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        
        int profit=0;
        int cost=prices[0];
        
        int maxi=0;
        
        for(int i=1;i<prices.size();i++)
        {
            profit=prices[i]-cost;
            
            maxi=max(profit,maxi);
            
            cost=min(cost,prices[i]);
            
        }
        return maxi;
    }
};