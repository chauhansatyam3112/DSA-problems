class Solution {
public:
    int secondMinimum(int n, vector<vector<int>>& edges, int time, int change) {
        
        unordered_map<int,vector<int>> mp;

    for(auto &it : edges) {
        int u = it[0];
        int v = it[1];

        mp[u].push_back(v);
        mp[v].push_back(u);
    }

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    vector<int> d1(n+ 1, INT_MAX);
    vector<int> d2(n+ 1, INT_MAX);

    d1[1] = 0;

    pq.push({0, 1});

    while(!pq.empty()) {
        
        auto node = pq.top().second;
        
        auto time_passed = pq.top().first;

        pq.pop();

        if(node ==n && d2[node] != INT_MAX ) {
            
            return d2[node];
        }

        int q = time_passed / change;

        if(q % 2 == 1) {
            
            
            time_passed = change*(q+1);
        }

        for(auto &it : mp[node]) {
            
            if(d1[it] > time_passed + time) {
                
                d2[it] = d1[it];
                
                d1[it] = time_passed + time;
                
                
                pq.push({time_passed + time, it});
                
            } else if(d2[it] > time_passed + time && d1[it] != time_passed + time) {
                
                d2[it] = time_passed + time;
                
                pq.push({time_passed + time, it});
            }
        }
    }

    return -1;
    }
};