class Solution {
public:
    #define ll long long
    vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {
        
        vector<ll>ans;
        
        sort(nums.begin(),nums.end());
        
        ll n=nums.size();
        
        
        vector<ll>prefix(n+1,0);
        
        for(int i=0;i<n;i++)
        {
            prefix[i+1]=prefix[i]+nums[i];
        }
        
        nums.insert(nums.begin(),0);n++;
        
        
        
        for(auto q:queries)
        {
            
            ll ldx=lower_bound(nums.begin(),nums.end(),q)-nums.begin()-1;
            
            ll udx=upper_bound(nums.begin(),nums.end(),q)-nums.begin();
            
            
            ll res=(q*ldx)-(prefix[ldx]-prefix[0]);
            
            if(udx!=n)
            {
                res+=(prefix[n-1]-prefix[udx-1])-q*(n-udx);
                
            }
            
            ans.push_back(res);
            
        
            
        }
        
        return ans;
        
        
    }
};