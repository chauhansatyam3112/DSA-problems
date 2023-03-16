class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>m(n,vector<int>(n,0));
        int top=0,left=0,right=n-1,bottom=n-1;
        int c=1;
        
        while(left<=right && top<=bottom)
        {
            
            for(int i=left;i<=right;i++)
            {
                m[left][i]=c++;
            }
            top++;
            
            for(int i=top;i<=bottom;i++)
            {
                m[i][right]=c++;
            }
            right--;
            for(int i=right;i>=left;i--)
            {
                m[bottom][i]=c++;
            }
            bottom--;
            for(int i=bottom;i>=top;i--)
            {
                m[i][left]=c++;
            }
            left++;
        }
        return m;
    }
};