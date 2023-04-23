class Solution {
public:
    int solve(map<int,int>& mp,int x)
    {
       int res=0;
        int cnt=0;
        for(auto it:mp)
        {
            cnt+=it.second;
            if(cnt>=x)
            {
                res=it.first;
                break;
            }
        }
        return res;
        
    }
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        
        
        int n=nums.size();
        vector<int>ans;
        map<int,int>mp;
        
        int i=0;int j=0;
        while(j<n)
        {
            if(nums[j]<0)
            {
                mp[nums[j]]++;
            }
            
            if(j-i+1<k)
            {
                j++;
            }
            else if(j-i+1==k)
            {
                int xthsmall=solve(mp,x);
                ans.push_back(xthsmall);
            
            mp[nums[i]]--;
            if(mp[nums[i]]==0)
            mp.erase(nums[i]);
            i++;
            j++;
            }
        }
        return ans;
    }
};