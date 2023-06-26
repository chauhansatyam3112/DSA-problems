class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        
        long long ans=0;
        priority_queue<int,vector<int>,greater<int>>pq1,pq2;
        
        int i=0,j=costs.size()-1;
        
        int temp=0;
        while(temp<k)
        {
            while(pq1.size()<candidates && i<=j)
            {
                pq1.push(costs[i]);
                 i++;
            }
            while(pq2.size()<candidates and j>=i)
            {
                pq2.push(costs[j]);
                j--;
            }
            
            auto x=pq1.size()>0?pq1.top():INT_MAX;
            auto y=pq2.size()>0?pq2.top() : INT_MAX;
            
            if(x<=y)
            {
                ans+=x;
                pq1.pop();
            }
            else{
                ans+=y;
            pq2.pop();}
            temp++;
        }
      
        
        return ans;
    }
};