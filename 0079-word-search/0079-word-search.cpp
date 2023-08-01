class Solution {
public:
    
    bool search(int i,int j,string &word,int idx,vector<vector<char>>&board,int n,int m)
    {
        if(word.length()==idx)return true;
       
        if(i>=n || j>=m || i<0 || j<0 || word[idx]!=board[i][j])return false;
        
        
        
        char temp=board[i][j];
        board[i][j]='#';
        
       
        bool down=search(i+1,j,word,idx+1,board,n,m);
        bool left=search(i,j+1,word,idx+1,board,n,m);
         bool up=search(i-1,j,word,idx+1,board,n,m);
        bool right=search(i,j-1,word,idx+1,board,n,m);
        
        board[i][j]=temp;
        
        return (up||down||left||right);
    }
    bool exist(vector<vector<char>>& board, string word) {
       
         int n=board.size();
        int m=board[0].size();
        
        
      for(int i=0;i<board.size();i++)
      {
          for(int j=0;j<board[0].size();j++)
          {
              if(word[0]==board[i][j]){
                if ( search(i,j,word,0,board,n,m))
                  return true;
                  
                  }
          }
      }
        return false;
        
        
    }
};