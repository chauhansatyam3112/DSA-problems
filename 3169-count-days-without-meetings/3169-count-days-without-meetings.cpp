class Solution {
public:
    int countDays(int days, vector<vector<int>>& nums) {
        
        sort(nums.begin(),nums.end());
        
        vector<vector<int>>v;
        
        for(int i=0;i<nums.size();i++)
        {
            if(v.empty() || v.back()[1]<nums[i][0])
            {
                v.push_back({nums[i][0],nums[i][1]});
            }
            
            else{
                
                
                    int mini=min(v.back()[0],nums[i][0]);
                    int maxi=max(v.back()[1],nums[i][1]);
                    
                   v.push_back({mini,maxi});
                
            }
        }
        
        int ans=0;
        
        ans+=abs(v.back()[1]-days);
        
        ans+=abs(v[0][0]-1);
        
        for(int i=1;i<v.size();i++)
        {
            
            int p=v[i][0]-v[i-1][1]-1;
            
            if(p>0)
            {
                ans+=p;
            }
            
            
        }
        
        return ans;
    }
};