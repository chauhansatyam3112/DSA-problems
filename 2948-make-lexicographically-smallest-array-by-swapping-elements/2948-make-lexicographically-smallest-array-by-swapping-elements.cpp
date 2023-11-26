class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        
        vector<pair<int,int>>v;
        
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            
         v.push_back({nums[i],i});
            
        }
        
        sort(v.begin(),v.end());
        
        unordered_map<int,vector<pair<int,int>>>mp;
        
        int id=-1;
        
        for(int i=0;i<n;i++)
        {
            
            if(i==0 || (v[i].first-v[i-1].first)>limit)
            {
                id++;
            }
            
            mp[id].push_back(v[i]);
            
        }
        vector<int>ans(n);
        
        for(auto it:mp)
        {
            vector<pair<int,int>>v1=it.second;
            
            vector<int>ele,idx;
            
            for(auto it:v1)
            {
                ele.push_back(it.first);
                idx.push_back(it.second);
            }
            
            sort(idx.begin(),idx.end());
            
            for(int i=0;i<idx.size();i++)
            {
                ans[idx[i]]=ele[i];
                
            }
            
        }
        return ans;
        
    }
};