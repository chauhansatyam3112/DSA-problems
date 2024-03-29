class Graph {
public:
    unordered_map<int, vector<pair<int, int>>> mp;
    
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    int N;

    Graph(int n, vector<vector<int>>& edges) {
        
       N = n;
        
        for (int i = 0; i < edges.size(); i++) {
            
            int u = edges[i][0];
            
            
            int v = edges[i][1];
            
            int cost = edges[i][2];
            
            mp[u].push_back({v, cost});
        }
    }
    
    void addEdge(vector<int> edge) {
        
        int u = edge[0];
        
        int v = edge[1];
        
        int cost = edge[2];
        
        mp[u].push_back({v, cost});
    }
    
    int shortestPath(int node1, int node2) {
        
       vector<int> res(N, INT_MAX);
        
        res[node1] = 0;
        
        pq.push({0, node1});

        while (!pq.empty()) {
            
            int dist = pq.top().first;
            
            int node = pq.top().second;
            pq.pop();

            for (auto& it : mp[node]) {
                
                int d = it.second;
                int p = it.first;

                if (d + dist < res[p]) {
                    
                    res[p] = d + dist;
                    
                    pq.push({d + dist, p});
                }
            }
        }

        return res[node2] == INT_MAX ? -1 : res[node2];
    }
};

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->shortestPath(node1,node2);
 */