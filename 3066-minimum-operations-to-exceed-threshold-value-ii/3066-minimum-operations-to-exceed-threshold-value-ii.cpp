class Solution {
public:
    #define ll long long
    int minOperations(vector<int>& nums, int k) {
        
         
        
//         unordered_map<int,int>mp;
        
//         for(int i=0;i<nums.size();i++)
//         {
//             mp[nums[i]]++;
//         }
        
        ll ans=0;
        
        priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;
        
        for(auto it:nums)
        {
            pq.push({it,1});
        }
        
        while(pq.size()>=2 && pq.top().first<k  )
        {
            ll p=pq.top().first;
            
            pq.pop();
            
            ll q=pq.top().first;
            
            ans++;
            
            pq.pop();
            
            long long res=min(p,q)*2*1LL+max(p,q);
            
            pq.push({res,1});
        }
        
        return ans;
        
        
        

    }
};