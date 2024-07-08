class Solution {
public:
    int findWinningPlayer(vector<int>& skills, int k) {
        
        deque<pair<int,int>>q;
        
        unordered_map<int,int>mp;
        
        for(int i=0;i<skills.size();i++)
        {
            q.push_back({skills[i],i});
            
        }
        
        while(!q.empty())
        {
            int x1=q.front().first;
            int x2=q.front().second;
            q.pop_front();
            
            int x3=q.front().first;
            int x4=q.front().second;
            q.pop_front();
            
            if(x1>x3)
            {
               q.push_back({x3,x4});
               q.push_front({x1,x2}); 
                
                mp[x1]++;
                
                if(mp[x1]==k || mp[x1]>skills.size()-1)
                {
                    return x2;
                }
            }
            else{
                
                 q.push_back({x1,x2});
                 q.push_front({x3,x4}); 
                
                 mp[x3]++;
                
                if(mp[x3]==k || mp[x3]>skills.size()-1)
                {
                    return x4;
                }
                
            }
            
           
        
        }
         return 0;
            
    }
};