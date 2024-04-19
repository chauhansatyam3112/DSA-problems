class Solution {
public:
    void dfs(int i,int j,vector<vector<int>>&vis,vector<vector<char>>&mat)
    {
        vis[i][j]=1;
        
        vector<vector<int>>directions{{1,0},{-1,0},{0,1},{0,-1}};
        
        for(auto it:directions)
        {
            
            auto xx=it[0]+i;
            auto yy=it[1]+j;
            
            if(xx>=0 && xx<mat.size() && yy>=0 && yy<mat[0].size() && !vis[xx][yy] && mat[xx][yy]=='O')
            {
               dfs(xx,yy,vis,mat);   
            }
        }
    }
    
    
    
    void solve(vector<vector<char>>& board) {
        
        int n=board.size();
        int m=board[0].size();
        
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        for(int j=0;j<m;j++)
        {
            if(!vis[0][j] && board[0][j]=='O')
            {
                dfs(0,j,vis,board);
            }
            
            if(!vis[n-1][j] && board[n-1][j]=='O')
            {
                dfs(n-1,j,vis,board);
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(!vis[i][0] && board[i][0]=='O')
            {
                dfs(i,0,vis,board);
            }
            
             if(!vis[i][m-1] && board[i][m-1]=='O')
            {
                dfs(i,m-1,vis,board);
            }
            
            
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j] && board[i][j]=='O')
                {
                    board[i][j]='X';
                }
            }
        }
        // return board;
    }
};