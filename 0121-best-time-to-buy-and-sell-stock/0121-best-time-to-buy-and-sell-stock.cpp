class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
       int  prv_profit=0;
       int  least_ele=INT_MAX;
        for(int i=0;i<prices.size();++i)
        {
           if(prices[i]<least_ele)
           least_ele=prices[i];
            
           profit=prices[i]-least_ele;
          if(prv_profit<profit)
            prv_profit=profit;
        }
        return prv_profit;
    }
};
    