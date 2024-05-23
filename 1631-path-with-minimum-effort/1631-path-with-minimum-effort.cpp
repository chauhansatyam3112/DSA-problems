class Solution {
public:
    
    typedef pair<int,pair<int,int>>p;
    
    vector<vector<int>>directions{{1,0},{-1,0},{0,1},{0,-1}};

    
    int minimumEffortPath(vector<vector<int>>& heights) {
        
        int n=heights.size(),m=heights[0].size();
        
        vector<vector<int>>dist(n,vector<int>(m,INT_MAX));
        
        priority_queue<p,vector<p>,greater<p>>pq;
        
        dist[0][0]=0;
        
        pq.push({0,{0,0}});
        
        while(!pq.empty())
        {
            auto d=pq.top().first;
            auto x=pq.top().second.first;
            auto y=pq.top().second.second;
            
            pq.pop();
            
            for(auto &it:directions)
            {
                int xx=x+it[0];
                int yy=y+it[1];
                
                if(xx>=0 && yy>=0 && xx<n && yy<m)
                {
                    int maxi=max(d,abs(heights[xx][yy]-heights[x][y]));
                    
                    if(dist[xx][yy]>maxi)
                    {
                        dist[xx][yy]=maxi;
                        pq.push({maxi,{xx,yy}});
                    }
                    
                    
                }
            }
            
        }
        return dist[n-1][m-1];
        
        
    }
};