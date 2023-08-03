class Solution {
public:
    
    bool isPossible(int row,int col,vector<string>&board,int n)
    {
        int temp1=row,temp2=col;
        
        while(row>=0 && col>=0)
        {
            if(board[row][col]=='Q')return false;
            
            row--;col--;
        }
        
        row=temp1,col=temp2;
        while(col>=0)
        {
            if(board[row][col]=='Q')return false;
            
            col--;
        }
        
        row=temp1,col=temp2;
        
        while(row<n && col>=0)
        {
            if(board[row][col]=='Q')return false;
            row++;col--;
        }
        
        return true;
           
    }
    void solve(int col,vector<string>&board,int n,vector<vector<string>>&ans)
    {
        if(col==n)
        {
            ans.push_back(board);return;
        }
        
        
        for(int i=0;i<n;i++)
        {
            if(isPossible(i,col,board,n))
            {
                board[i][col]='Q';
                solve(col+1,board,n,ans);
                 board[i][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        
        
        vector<vector<string>>ans;
        vector<string>board(n);
        
        string  s(n,'.');
        
        for(int i=0;i<n;i++)
        {
            board[i]=s;
        }
        
        solve(0,board,n,ans);
        return ans;
    }
};