class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        
        if(nums.size()%k!=0)return false;
        
        unordered_map<int,int>mp;
        
        for(auto it:nums)mp[it]++;
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
        
        for(auto it:mp)
        {
            pq.push({it.first,it.second});
        }
        
        int cnt=0;
        
        while(!pq.empty())
        {
            vector<pair<int,int>>v;
            
            for(int i=0;i<k;i++)
            {
                if(!pq.empty()){
                    
                 v.push_back({pq.top().first,pq.top().second});
                 pq.pop();}
                
               
            }
            
            int cnt=v[0].first;
            for(auto it:v){
                
                int val=it.second-1;
                if(cnt!=it.first)return false;
                if(val>0){
                    
               
                    
                pq.push({it.first,val});
                    
                  
                    
                }
                  cnt++;
            }
            
            if(!pq.empty() && v.size()!=k)return false;
        }
        return true;
    }
};