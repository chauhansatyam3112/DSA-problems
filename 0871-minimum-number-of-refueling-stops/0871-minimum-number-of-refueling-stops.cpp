class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        
        
        int curr=startFuel;
        
        int idx=0;
        int ans=0;
        
        priority_queue<int>pq;
        
        while(curr<target)
        {
            while(idx<stations.size() && stations[idx][0]<=curr)
            {
              
                
                pq.push(stations[idx][1]);
                
                  idx++;
            }
            
            if(pq.empty() )return -1;
            
            curr+=pq.top();pq.pop();
            
            ans++;
            
            
        }
        return ans;
        
    }
};