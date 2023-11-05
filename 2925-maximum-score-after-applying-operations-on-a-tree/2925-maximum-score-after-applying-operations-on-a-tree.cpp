class Solution {
public:
    long long solve(int i,vector<int>v[],vector<int>& values,vector<int>&vis)
    {  
        if(v[i].size()==1 && i!=0)
            
       return (long long)values[i];
        
       long long sum=0;
        
       vis[i]=1;
        
       for(auto it:v[i])
       {    
           if(vis[it]==1)
               
            continue;
           
           sum+=solve(it,v,values,vis);
       } 
        
       
        return min((long long)values[i],sum);
    }
      
    
    long long maximumScoreAfterOperations(vector<vector<int>>& edges, vector<int>& values) {
        
        int n=values.size();
        
        vector<int>v[n];
        
        for(int i=0;i<n-1;i++)
        {
            v[edges[i][0]].push_back(edges[i][1]);
            
            v[edges[i][1]].push_back(edges[i][0]);
        }
        long long sum=0;
        
        for(auto i:values)
            sum=sum+i;
        
        vector<int>vis(n,0);
        
        long long res=solve(0,v,values,vis);
        
        return sum-res;
    }
   
};