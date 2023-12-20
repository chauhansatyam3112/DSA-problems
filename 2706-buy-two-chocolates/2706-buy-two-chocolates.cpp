class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        
        sort(prices.begin(),prices.end());
        int p=0;
        for(int i=0;i<2;i++)
        {
            p+=prices[i];
        }
        if(p>money)
        {
            return money;
        }
        else
            return money-p;
        
    }
};