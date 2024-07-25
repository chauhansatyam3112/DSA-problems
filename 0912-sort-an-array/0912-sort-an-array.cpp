class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        unordered_map<int,int>mp;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        int i=0;
        int maxi=*max_element(nums.begin(),nums.end());
        int mini=*min_element(nums.begin(),nums.end());
        
        
        int j=0;
        
        for(int i=mini;i<=maxi;i++)
        {
            while(mp[i]>0)
            {
                nums[j++]=i;
                
                mp[i]--;
              
                
                
            }
        }
        
        return nums;
    }
};