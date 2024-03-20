class Solution {
public:
    
    int leastInterval(vector<char>& tasks, int n) {
        
        
        unordered_map<char,int>mp;
        
        for(int i=0;i<tasks.size();i++)
        {
            mp[tasks[i]]++;
        }
        
        priority_queue<pair<int ,char>>pq;
        
        priority_queue<pair<int ,char>>pq1;
        
        
        
        for(auto it:mp)
        {
            pq.push({it.second,it.first});
        }
        
        int cnt=0;
        
        int p=n;
        
        int ans=0;
        
       while(!pq.empty())
       {
           vector<pair<int,char>>v;
           
           for(int i=0;i<n+1;i++)
           {
               if(!pq.empty())
               {
                   v.push_back(pq.top());
                   pq.pop();
               }
           }
           
           for(auto it:v)
           {
               pair<int,char>p=it;
               
               int x=p.first;
               x=x-1;
               
               if(x!=0)
               {
                   pq.push({x,p.second});
               }
           }
           
           ans+=(pq.empty())?v.size():n+1;
           
           
           
           
       }
        
        return ans;
        
       
    }
};