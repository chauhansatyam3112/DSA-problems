class Solution {
public:
    int minimumSeconds(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,vector<int>>mp;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]].push_back(i);
        }
        
        
        int ans=INT_MAX;
        
        for(auto it:mp)
        {
            vector<int>x = it.second;
            
            int maxi=0;
            int s=x.size();
            if(s==1) maxi=n/2;
            
            for(int i=0;i<s;i++)
            {
                maxi=max(maxi,(abs(x[(i+1)%s]-x[i]+n)%n)/2);
            }
            ans=min(ans,maxi);
        
        }
        
        
        
        return ans;
        
       
    }
};