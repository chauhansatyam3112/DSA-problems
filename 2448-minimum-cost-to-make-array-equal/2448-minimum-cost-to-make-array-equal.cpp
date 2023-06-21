class Solution {
public:
    long long solve(vector<int>&nums,vector<int>&cost,long long x)
    {
     
        long long ans=0;
        for(int i=0;i<nums.size();i++)
            
        ans+=1LL* abs(nums[i]-x)*cost[i];
        
        
        return ans;
        
        
    }
    long long minCost(vector<int>& nums, vector<int>& cost) {
        
        vector<pair<int,int>>v;
        
        for(int i=0;i<nums.size();i++)
        {
            v.push_back({nums[i],cost[i]});
        }
        
        long long median;
        long long sum=0;
        sort(v.begin(),v.end());
        
        for(int i=0;i<nums.size();i++)
        {
            sum+=v[i].second;
       
        }
        long long total=0;
        int i=0;
        
        while(total< (sum+1)/2 && i<nums.size())
        {
            total+=v[i].second;
            median=v[i].first;
            i++;
            
        }
        
        long long ans= solve(nums,cost,median);
        return ans;
        
        
    }
};