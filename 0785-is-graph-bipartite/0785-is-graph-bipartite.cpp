class Solution {
public:
    bool solve(vector<vector<int>>&graph,int i,vector<int>&color)
    {
        queue<int>pq;
        
        pq.push(i);
        
        color[i]=0;
        
        while(!pq.empty())
        {
            auto x=pq.front();
            
            pq.pop();
            
            for(auto &it:graph[x])
            {
                if(color[it]==-1)
                {
                    color[it]=!color[x];
                    
                    pq.push(it);
                }
               else if(color[it]==color[x])return false;
                    
                    
                    
            }
             
        }
        
        
        return true;
        
        
        
        
        
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        
        int n=graph.size();
        
        vector<int>color(n,-1);
        
        for(int i=0;i<n;i++)
        {
            if(color[i]==-1)
            {
                if(solve(graph,i,color)==false)return false;
            }
            
        }
        
        return true;
    }
};