class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        
        // code written by-satyam
        
        // 2 3 2 k=2
        
       
        
        queue<pair<int,int>>pq1;
        
        for(int i=0;i<tickets.size();i++)
        {
            pq1.push({tickets[i],i});
        }
        
        int cnt=0;
        
         vector<pair<int,int>>v;
            
        
        while(true)
        {
           
            int p= pq1.front().first;
            
            int idx=pq1.front().second;
            
            p=p-1;
            
            cnt++;
            
             if(p!=0)
            {
                
                
                
                v.push_back({p,idx});
                
            }
            
            if(p==0 && k==idx)
            {
                break;
            }
            
             pq1.pop();
            
           
            
            if(pq1.empty())
            {
                
                
                for(auto it:v)
                {
                    pq1.push({it.first,it.second});
                }
                
                v.clear();
            }
            
            
            
           
            
            
        }
        
        return cnt;
        
        
        
        
            
    }
};