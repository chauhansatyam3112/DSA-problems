class Solution {
public:
    string frequencySort(string s) {
        
        priority_queue<pair<int,char>>pq;
        map<char,int>mp;
        
      for(int i=0;i<s.length();i++)
      {
          mp[s[i]]++;
         
      }
        
        for(auto it:mp)
        {
            pq.push({it.second,it.first});
        }
        string ans;
        while(!pq.empty())
        {
           int p=pq.top().first;
            cout<<p<<" ";
            
            
            while(p--)
            {
                ans+=pq.top().second;
            }
            pq.pop();
            
        }
      
        return ans;
    }
};