class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>v;
        
        v.push_back(nums[0]);
        
        for(int i=1;i<nums.size();i++)
        {
            int x=nums[i];
            
            if(x>v.back())
            {
                v.push_back(x);
            }
            else{
                
                auto idx=lower_bound(v.begin(),v.end(),x)-v.begin();
                
                v[idx]=x;
                
            }
        }
        return v.size();
    }
};