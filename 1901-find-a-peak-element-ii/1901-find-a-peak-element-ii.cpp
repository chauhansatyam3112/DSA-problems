class Solution {
public:
    int findmaxi(vector<vector<int>>& mat,int col,int n)
    {
        int maxi=-1,idx=-1;
        
        for(int i=0;i<n;i++)
        {
            if(mat[i][col]>maxi){
                maxi=mat[i][col];
            idx=i;
                
            }
        }
        return idx;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        
        
        int n=mat.size(),m=mat[0].size();
        
        int low=0,high=m-1;
        
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            
            int  idx= findmaxi(mat,mid,n);
            
            int left= mid-1>=0?mat[idx][mid-1]:-1;
            
            int right=mid+1<m?mat[idx][mid+1]:-1;
            
            if(mat[idx][mid]>left && mat[idx][mid]>right)return {idx,mid};
            
            else if(mat[idx][mid]<left)
                high=mid-1;
            
            else
                low=mid+1;
            
        }
        return {-1,-1};
    }
};