class Solution {
public:
    bool isLucky(int num,vector<vector<int>>&matrix,int p,int q)
    {
        
       for(int i=0;i<matrix[0].size();i++)
       {
           if(num>matrix[p][i])
           {
               return false;
           }
       }
        
         for(int i=0;i<matrix.size();i++)
        {
             if(num<matrix[i][q])
             {
                 return false;
             }
            
        }
        
    return true;
        
    }
    
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        
        vector<int>v;
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(isLucky(matrix[i][j],matrix,i,j))
                {
                    v.push_back(matrix[i][j]);
                }
            }
        }
        
        return v;
    }
};