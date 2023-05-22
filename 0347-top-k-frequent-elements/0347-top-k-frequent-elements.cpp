class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>>pq;
        
        for(auto it:mp)
        {
            pair<int,int>p;
            p.first=it.second;
            p.second=it.first;
            pq.push(p);
        }
        vector<int>ans;
        while(!pq.empty()&& k--)
        {
            int x=pq.top().second;
            pq.pop();
            ans.push_back(x);
            
        }
        return ans;
    }
};