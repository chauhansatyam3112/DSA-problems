class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        
        vector<int>visited(n,0);
        
        unordered_map<int,vector<int>>mp;
        
        for(int i=0;i<n;i++)
        {
            
            int x=leftChild[i];
            
            if(x!=-1)
            {
                mp[i].push_back(x);
                visited[x]++;
            }
            
            int y=rightChild[i];
            if(y!=-1)
            {
                mp[i].push_back(y);
                visited[y]++;
            }
        }
        
        vector<int>root;
        
        for(int i=0;i<n;i++)
        {
            if(visited[i]==0)
            {
                root.push_back(i);
                
            }
        }
        if(root.size()!=1)
        {
            return false;
        }
        
        int t=root[0];
        
        queue<int>pq;
        pq.push(t);
        
       unordered_set<int>st;
        
        st.insert(t);
        while(!pq.empty())
        {
            auto node=pq.front();pq.pop();
            
            if(mp.find(node)!=mp.end())
            {
                vector<int>v=mp[node];
                
                for(auto it:v)
                {
                    if(st.find(it)!=st.end())return false;
                    
                    st.insert(it);
                    
                    pq.push(it);
                }
            }
        }
        return st.size()==n;
    }
};