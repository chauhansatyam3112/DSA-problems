class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n=nums.size();
        int pre_sum=0,cnt=0;
        for(int i=0;i<n;i++)
            
        {
            pre_sum+=nums[i];
            if(pre_sum==k)
            {
                cnt++;
            }
            if(mp.find(pre_sum-k)!=mp.end())
            {
                cnt+=mp[pre_sum-k];
            }
           
             mp[pre_sum]++;
            
            
        }
        return cnt;
    }
};