class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]&1){
                nums[i]=1;
            }
            else{
                nums[i]=0;
            }
        }
       
        int ans=0;
        unordered_map<int,int>mp;
        
        int sum=0;
        
        mp[0]=1;
        
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            
         
            if(mp.find(sum-k)!=mp.end())
            {
                ans+=mp[sum-k];
            }
            mp[sum]++;
            
           
        }
        return ans;
    }
};