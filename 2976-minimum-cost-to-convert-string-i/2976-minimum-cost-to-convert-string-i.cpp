class Solution {
public:
    
    void flyodwarshall(vector<char>&original,vector<char>&changed,vector<int>&cost,vector<vector<long long>>&costmat)
        
    {
        
        for(int i=0;i<original.size();i++)
        {
            int x1=original[i]-'a';
            int x2=changed[i]-'a';
            
           costmat[x1][x2]=min(1LL*costmat[x1][x2],(long long)cost[i]);
        }
        
        for(int k=0;k<26;k++)
        {
            for(int i=0;i<26;i++ )
            {
                for(int j=0;j<26;j++)
                {
                    costmat[i][j]=min(costmat[i][j],costmat[i][k]+costmat[k][j]);
                }
            }
        }
        
    }
    
    
    
    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
        
        
        vector<vector<long long >>costmat(26,vector<long long>(26,INT_MAX));
        
        flyodwarshall(original,changed,cost,costmat);
        
        long long ans=0;
        
        for(int i=0;i<source.length();i++)
        {
           
                if(source[i]==target[i])
                {
                    continue;
                }
            
              if(costmat[source[i]-'a'][target[i]-'a']==INT_MAX)
              {
                  return -1;
              }
            
            ans+=(costmat[source[i]-'a'][target[i]-'a']);
            
        }
        
        
        return ans;
        
        
        
        
        
        
        
    }
};