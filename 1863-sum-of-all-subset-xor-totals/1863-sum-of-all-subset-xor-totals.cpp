class Solution {
public:
    void solve(int idx,vector<int>&nums,vector<vector<int>>&v,vector<int>&temp)
    {
        if(idx>=nums.size())
        {
            v.push_back(temp);
            return;
        }
        
    
        
        temp.push_back(nums[idx]);
        
        solve(idx+1,nums,v,temp);
        
        temp.pop_back();
        
        solve(idx+1,nums,v,temp);
        
    }
    
    int subsetXORSum(vector<int>& nums) {
        
        vector<vector<int>>v;
        
        vector<int>temp;
        
        solve(0,nums,v,temp);
        
        int ans=0;
        
        for(int i=0;i<v.size();i++)
        {
            int xorr=0;
            
            for(int j=0;j<v[i].size();j++)
            {
                xorr^=v[i][j];
                
            }
            
            ans+=(xorr);
        }
        
        return ans;
    }
};