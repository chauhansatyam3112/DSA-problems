class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        vector<long long >ans;
      unordered_map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++)
        {
           mp[nums[i]].push_back(i);
        }
        long long sum=0;
        vector<long long >res(nums.size(),0);
        for(auto it:mp)
        {
            vector<int >v=it.second;
            int size=it.second.size();
            if(size==1)
            {
               res[v[0]]=0;
                continue;
            }
         vector<long>prefix(size,0),suffix(size,0);
            prefix[0]=v[0]; suffix[size-1]=v[size-1];
            for(int i=1;i<size;i++)
            {
                prefix[i]=prefix[i-1]+v[i];
            }
            for(int i=size-2;i>=0;i--)
            {
                suffix[i]=suffix[i+1]+v[i];
            }
            for(int i=0;i<size;i++)
            {
                long long ans=((long long )v[i]*i-prefix[i]);
                ans+=abs(((long long )v[i]*(size-i-1))-suffix[i]);
                res[v[i]]=ans;
            }
            
            
        }
        return res;
       
    }
};