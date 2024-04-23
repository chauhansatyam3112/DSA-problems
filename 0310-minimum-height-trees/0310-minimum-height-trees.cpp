class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        
        
        unordered_map<int,vector<int>>mp;
        
        if(n==1)return {0};
        
        vector<int>indgree(n);
        
        for(auto &it:edges)
        {
            int u=it[0];
            
            int v=it[1];
            
            mp[u].push_back(v);
            mp[v].push_back(u);
            
            indgree[u]++;
            indgree[v]++;
        }
        
         queue<int>pq;
        
        for(int i=0;i<n;i++)
        {
            if(indgree[i]==1) pq.push(i);
        }
        
        vector<int>ans;
        
        while(n>2)
        {
            
            n-=pq.size();
            
            int m=pq.size();
            
            while(m--){
            
            int p=pq.front();pq.pop();
            
            for(int &it:mp[p])
            {
                indgree[it]--;
                
                if(indgree[it]==1)
                {
                    pq.push(it);
                }
            }
                
            }
            
        }
        
        
        while(!pq.empty())
        {
            ans.push_back(pq.front());pq.pop();
        }
        
        return ans;
        
        
        
    }
};