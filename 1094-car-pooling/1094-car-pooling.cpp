class Solution {
public:
    
    static bool comp(vector<int>v1,vector<int>v2)
    {
        if(  v1[1]<v2[1]or( v1[1]==v2[1]&& v1[2]<v2[2]))
        {
            return true;
        }
        else{
            return false;
        }
    }
    
    bool carPooling(vector<vector<int>>& trips, int capacity) {
      
        
        int curr=0;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq; 
        sort(trips.begin(),trips.end(),comp);
        
        for(int i=0;i<trips.size();i++)
        {
            while(!pq.empty() && pq.top().first<=trips[i][1])
            {
                curr-=pq.top().second;
                pq.pop();
            }
            
            pq.push({trips[i][2],trips[i][0]});
            
            curr+=trips[i][0];
            if(curr>capacity)
            {
                return false;
            }
            
            
            
        }
        return true;
        
    }
};