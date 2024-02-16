class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        
        unordered_map<int,int>mp;
        
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        
        priority_queue<int, vector<int>, greater<int>>pq;
        
        
       for(auto it:mp)
       {
           pq.push(it.second);
       }
        
       while(!pq.empty() && k--)
       {
          if(pq.top()==1)
              
           pq.pop();
           
          else if(pq.top()>=2 && k!=0)
          {
              int p=pq.top()-1;
              
              pq.pop();
              
              pq.push(p);
              
            
              
             
          }
              
       }
        return pq.size();
        
    }
};