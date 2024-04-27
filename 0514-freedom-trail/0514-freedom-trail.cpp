class Solution {
public:
    vector<vector<int>>dp;
    
    int find(int i,int idx,string &ring,string &key)
    {
        int n=ring.length();
        
        int x1=abs(i-idx);
        
        int x2=n-x1;
        
        return min(x1,x2);
       
    }
    
    int solve(int idx,int j,string &ring,string &key)
    {
        if(idx==key.length())return 0;
        
        if(dp[j][idx]!=-1)return dp[j][idx];
        
        
        int ans=INT_MAX;
        
        
        for(int i=0;i<ring.length();i++)
        {
            
            if(ring[i]==key[idx])
            {
                
                 int dist=find(i,j,ring,key);
            
               int mini=dist+1+solve(idx+1,i,ring,key);
            
               ans=min(ans,mini);
                
            }
           
        }
        
        return dp[j][idx]=ans;
    }
    
    int findRotateSteps(string ring, string key) {
        
        int n=ring.length(), m=key.length();
        
        dp=vector<vector<int>>(n,vector<int>(m,-1));
        
        return solve(0,0,ring,key);
        
    }
};