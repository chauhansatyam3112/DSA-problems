class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        
       
       
     priority_queue<int,vector<int>,greater<int>>pq;
        
      
        unordered_map<string,int>mp1;
        unordered_map<int,int>mp2;
        
        for(int i=0;i<arr.size();i++)
        {
          mp1[arr[i]]++;
              
        }
        
        for(int i=0;i<arr.size();i++)
        {
            if(mp1[arr[i]]<=1)
            {
               pq.push(i);   
            }
        }
       
        
      int x=k-1;
        
        
       while(!pq.empty() && x-- )
       {
          pq.pop();
           
           
       }
        
      if(pq.empty())
      {
          return "";
      }
        
       int ans=pq.top();
        
      
        
    return arr[ans];
        
        
        
        
    
        
        
        
        
       
        
        
        
        
       
    }
};