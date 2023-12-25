class Solution {
public:
   unordered_map<string, long long> mp1;
    
    unordered_map<char, vector<pair<char, long long>>> mp2;

    void dijkstra(char source) {
        
        priority_queue<pair<long long, char>, vector<pair<long long, char>>, greater<pair<long long, char>>> pq;
        
        pq.push({0, source});

        vector<long long> dis(26, LLONG_MAX);

        while (!pq.empty()) {
            
            auto top = pq.top();
            pq.pop();

            auto distance = top.first;
            
            auto node = top.second;

            if (dis[node - 'a'] <= distance) continue;

            dis[node - 'a'] = distance;

            mp1[solve(source, node)] = distance;

            for (pair<char, long long> child : mp2[node]) {
                
                if (dis[child.first - 'a'] == LLONG_MAX) {
                    
                    pq.push({distance + child.second, child.first});
                }
            }
        }
    }

    string solve(char a, char b) {
        
        string ans = "";
        
        ans.push_back(a);
        
        ans.push_back(',');
        
        ans.push_back(b);
        
        return ans;
    }

    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
        string str = "";

        for (int i = 0; i < original.size(); i++) {
            
            str = solve(original[i], changed[i]);
            
            mp2[original[i]].push_back({changed[i], cost[i]});
            
            mp1[str] = cost[i];
        }

        for (int i = 'a'; i <= 'z'; i++) {
            
            dijkstra(i);
        }

        long long ans = 0;

        for (int i = 0; i < source.size(); i++) {
            
            string str = solve(source[i], target[i]);

           
            if (mp1.find(str) == mp1.end()) return -1;

            ans += (mp1[str]);
        }

        return ans;
    }
};