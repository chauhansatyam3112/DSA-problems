class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& pre) {
        
             vector<int>adj[n];
            
            for(int i=0;i<pre.size();i++)
            {
                    adj[pre[i][1]].push_back(pre[i][0]);
            }
            
            vector<int>indgree(n,0);
            
            vector<int>topo;
            
            for(int i=0;i<n;i++)
            {
                    for(int j=0;j<adj[i].size();j++)
                    {
                            indgree[adj[i][j]]++;
                    }
            }
            
            queue<int>q;
            
            for(int i=0;i<n;i++)
            {
                    if(indgree[i]==0)
                            q.push(i);
            }
            
            while(!q.empty())
            {
                    auto x=q.front();q.pop();
                    
                    topo.push_back(x);
                    
                    for(auto it:adj[x])
                    {
                            indgree[it]--;
                            
                            if(indgree[it]==0)
                            {
                                    q.push(it);
                            }
                    }
            }
            
            if(topo.size()==n)return topo;
            
            else
                    return {};
            
    
    }
};