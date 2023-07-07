class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int n=matrix.size();
        int m=matrix[0].size();
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                
               
                if(matrix[i][j]==0)
                {
                   // flag=true;
                    for(int k=0;k<m;k++)
                    {
                         if(matrix[i][j]==-9999)
                     {
                         continue;
                    
                      }
                        if(matrix[i][k]!=0)
                
                          matrix[i][k]=-9999;
                    }
                    
                    for(int l=0;l<n;l++)
                    {
                         if(matrix[l][j]==-9999)
                     {
                         continue;
                    
                      }
                        if(matrix[l][j]!=0)
                
                          matrix[l][j]=-9999;
                    }
                }
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==-9999)
                {
                    matrix[i][j]=0;
                }
            }
        }
        
        return;
    }
};