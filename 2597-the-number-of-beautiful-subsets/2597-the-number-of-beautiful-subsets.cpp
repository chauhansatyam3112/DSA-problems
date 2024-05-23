class Solution {
public:
    
    int solve(int idx,vector<int>&nums,int k,unordered_map<int,int>&mp)
    {
        if(idx==nums.size())return 1;
        
        int take=0;
        
        if(!mp[nums[idx] - k] && !mp[nums[idx] + k])
        {
            mp[nums[idx]]++;
            
            take=solve(idx+1,nums,k,mp);
            
            mp[nums[idx]]--;
        }
        
        int nottake=solve(idx+1,nums,k,mp);
        
        return take+nottake;
    }
    int beautifulSubsets(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());
        
        unordered_map<int,int>mp;
        
        return solve(0,nums,k,mp)-1;
    }
};