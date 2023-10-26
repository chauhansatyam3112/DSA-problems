class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& nums) {
        
        
        sort(nums.begin(),nums.end());
        
        unordered_map<int,long long>mp;
        
        for(auto it:nums)
        {
            mp[it]++;
        }
        
        for(int i=1;i<nums.size();i++)
        {
            int root=nums[i];
            
            for(int j=0;j<i;j++)
            {
                int left_child=(nums[i]%nums[j]);
                
                if(left_child==0 && (mp.find(nums[i]/nums[j])!=mp.end()))
                    
                   {
                       mp[root]+=(mp[nums[i]/nums[j]]*mp[nums[j]]);
                       
                       
                   }
            }
        }
                   
                   long ans=0;
                   
                  for (auto it : mp) {
                      
                      ans = (ans + it.second) % (1000000007);  
                      
                     }

                   return ans;
                   
    }
};