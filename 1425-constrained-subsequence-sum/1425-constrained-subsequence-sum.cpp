class Solution {
public:
    int constrainedSubsetSum(vector<int>& nums, int k) {
        
        
        priority_queue<pair<int,int>>pq;
        
        int ans=nums[0],maxi=0,sum=0;
        
        pq.push({nums[0],0});
        
        for(int i=1;i<nums.size();i++)
        {
            
            while(i-(pq.top().second)>k)pq.pop();
            
             sum = max(pq.empty() ? 0 : pq.top().first, 0) + nums[i];
            
            ans=max(ans,sum);
            
            pq.push({sum,i});
            
        }
       
        return ans;
        
    }
};