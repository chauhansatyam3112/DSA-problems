class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        
        multiset<int>mp;
        
        int i=0,j=0;
        int maxi=0;
        
        while(j<nums.size())
        {
            mp.insert(nums[j]);
            
            while(*mp.rbegin()-*mp.begin()>limit)
            {
                mp.erase(mp.find(nums[i]));
                
                i++;
            }
            
            maxi=max(maxi,j-i+1);
            
            j++;
        }
        
        return maxi;
    }
};