class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int sum=0;
        int cnt=0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            
            
            if(sum==goal)
            {
                cnt++;
            }
            if(mp.find(sum-goal)!=mp.end())
            {
                cnt+=mp[sum-goal];
            }
            mp[sum]++;
       }
        return cnt;
    }
};