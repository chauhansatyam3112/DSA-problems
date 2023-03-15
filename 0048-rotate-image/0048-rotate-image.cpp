class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        
        //first tanspose the matrix;
        //then reverse the elemnets
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<m;j++)
            {
                swap(mat[i][j],mat[j][i]);
            }
        }
        //reverse
        for(int i=0;i<n;i++)
        {
            int low=0,high=n-1;
            while(low<=high)
            {
                swap(mat[i][low],mat[i][high]);
                low++;high--;
            }
         }
       
    }
};