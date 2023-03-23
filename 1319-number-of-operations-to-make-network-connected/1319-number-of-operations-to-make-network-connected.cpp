class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
 if (connections.size() < n - 1) return -1;
      vector < bool > vis(n, 0);
      unordered_map < int, vector < int >> mpp;
      int cnt = -1;
      for (auto it: connections) 
      {
         mpp[it[0]].push_back(it[1]);
         mpp[it[1]].push_back(it[0]);
      }
     for (int i = 0; i < n; ++i)
       {
         if (!vis[i]) 
         {
            queue < int > q;
            q.push(i);
            vis[i] = 1;
            cnt++;
            while (!q.empty())
             {
               int temp = q.front();
               q.pop();
               for (auto it: mpp[temp]) 
               {
                  if (vis[it] == 0)
                   {
                     vis[it] = 1;
                     q.push(it);
                  }
               }
            }
         }
      }
      return cnt;
    }
};