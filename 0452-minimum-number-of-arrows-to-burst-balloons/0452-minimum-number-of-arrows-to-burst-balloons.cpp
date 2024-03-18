class Solution {
public:
    static bool comp(vector<int>&v1,vector<int>&v2)
    {
        return v1[1]<v2[1];
    }
    
    int findMinArrowShots(vector<vector<int>>& points) {
        
        sort(points.begin(),points.end(),comp);
        
        int end=points[0][1];
        
        int cnt=1;
        
        if(points.size()==1)return 1;
        
        if(points.size()==2)
        {
           if(points[1][0]<=end)
                
                return 1;
        }
        
        for(int i=1;i<points.size();i++)
        {
            if(end>=points[i][0])
                
                continue;
            
            cnt++;
            
            end=points[i][1];
        }
        
        
        return cnt;
        
            
            
      
    }
};