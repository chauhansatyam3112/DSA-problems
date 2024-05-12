class Solution {
public:
    
    bool check(vector<vector<int>>& points,int mid,string&s)
    {
        int n=points.size();
        
        unordered_map<char,int>mp;
        
        for(int i=0;i<points.size();i++)
        {
            if(points[i][0]<=mid && points[i][1]<=mid)
            {
                mp[s[i]]++;
            }
        }
        
        for(auto it:mp)
        {
            if(it.second>1)
            {
                return false;
            }
        }
        
        return true;
        
    }
    
    int maxPointsInsideSquare(vector<vector<int>>& points, string s) {
        
        int n=points.size();
        
        
        for(int i=0;i<points.size();i++)
        {
            points[i][0]=abs(points[i][0]);
            
            points[i][1]=abs(points[i][1]);
        }
        
        int left=0,right=1e9+10,ans=1;
        
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            
            
            if(check(points,mid,s))
            {
                ans=mid;
                left=mid+1;
            }
            
            else{
                right=mid-1;
            }
            
            
            
        }
        int cnt=0;
        
        for(int i=0;i<n;i++)
        {
            if(points[i][0]<=ans && points[i][1]<=ans) cnt++;
        }
        
        return cnt;
    }
};