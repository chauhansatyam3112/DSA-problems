class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        
       int n=mat.size();
        int maxi=mat[n-1][n-1],mini=mat[0][0];
       // for(int i=0;i<n;i++)
       //  {
       //      for(int j=0;j<mat[0].size();j++)
       //      {
       //          if(maxi>mat[i][j]) maxi=mat[i][j];
       //          if(mini<mat[i][j]) mini=mat[i][j];
       //      }
       //  }
       // int index=upper_bound(mat.begin(),mat.end(),target)-mat.begin();
      //   int index=0;
        // for(int i=0;i<n;i++)
        // {
        //     index=upper_bound(mat[i].begin(),mat[i].end(),target)-mat[i].begin();
        // }
//         int low=mini,high=maxi;
//         while(low<high)
//         {
//             int mid=(low+high)/2;int count=0;
//             for(int i=0;i<n;i++ ){
//                 count+=index=upper_bound(mat[i].begin(),mat[i].end(),target)-mat[i].begin();
                
//             }
//             if(count==index-1)
//                 return true;
//             else{
//             if(count<index)low=mid+1;
//             else
//                 high=mid-1;}
            
            
//         }
//         return false;
        
       // int  n=mat.size();
        int low=0;
        int high=mat[0].size()-1;
        while(low<n && high>=0)
        {
            if(target==mat[low][high])
                return true;
            else
                if(target<mat[low][high])
                    high--;
            else
                low++;
        }
        return false;    
        
    }
};