class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        
        vector<int>distance(n,INT_MAX);
        
        unordered_map<int,vector<pair<int,int>>>mp;
        
        for( vector<int>& vec:flights)
        {
            int u=vec[0];
            int v=vec[1];
            int cost=vec[2];
            
            mp[u].push_back({v,cost});
            
        }
        
        queue<pair<int,int>>pq;
        pq.push({src,0});
        
        distance[src]=0;
        
        int step=0;
        
        while(!pq.empty() && step<=k)
        {
            int n=pq.size();
            
            while(n--)
            {
                int u=pq.front().first;
                
                int d=pq.front().second;
                
                pq.pop();
                
               for(pair<int,int>&pr:mp[u])
               {
                  int v=pr.first;
                   int cost=pr.second;
                   
                   if(cost+d<distance[v])
                   {
                       distance[v]=cost+d;
                       
                       pq.push({v,cost+d});
                       
                   }
               }
            }
            
            step++;
        }
        
        return distance[dst]==INT_MAX?-1:distance[dst];
        
    }
};