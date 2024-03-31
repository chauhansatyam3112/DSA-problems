class Solution {
public:
    
    int solve(vector<int>&nums,int k)
    {
        
    int ans=0;
    
      unordered_map<int,int>mp;
        
        int j=0,i=0;
        
        while(j<nums.size())
        {
            mp[nums[j]]++;
        
     
           while(mp.size()>k && i<=j)
            {
                mp[nums[i]]--;
               
               if(mp[nums[i]]==0)
               {
                   mp.erase(nums[i]);
               }
               
                i++;
            }
            
            
            ans+=(j-i+1);
            
             j++;
         
            
        }
    
        return ans;
        
    }
        
    
    
    int subarraysWithKDistinct(vector<int>& nums, int k) {
     
       return solve(nums,k)-solve(nums,k-1);
        
    }
};