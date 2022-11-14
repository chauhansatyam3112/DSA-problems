class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        
     int matrix2[m][n];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                matrix2[i][j]=matrix[i][j];
            }
        }
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0){
                    for(int k=0;k<n;k++){
                        matrix2[i][k]=0;}
                for(int p=0;p<m;p++){
                    matrix2[p][j]=0;
                }
                    
            
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                matrix[i][j]=matrix2[i][j];
            }
        }
    }
};