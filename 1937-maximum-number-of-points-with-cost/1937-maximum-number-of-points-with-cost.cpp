class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) {
        
        int n=points.size(),m=points[0].size();
        
        vector<long long >prev(m,0);
        
       
        
        for(int i=0;i<m;i++)
        {
            prev[i]=points[0][i];
        }
        
        for(int i=1;i<n;i++)
        {
            long long  left=0;
            
             vector<long long >curr(m,0);
            
            for(int j=0;j<m;j++)
            {
                left=max(left-1,prev[j]);
                
                curr[j]=points[i][j]+left;
            }
            
            long long  right=0;
            
            for(int j=m-1;j>=0;j--)
            {
                right=max(right-1,prev[j]);
                
                curr[j]=max(curr[j],points[i][j]+right);
            }
            
            
            prev=curr;
            
        }
        
        long long ans=0;
        
        ans=*max_element(prev.begin(),prev.end());
        
        return ans;
        
        
        
        
    }
};