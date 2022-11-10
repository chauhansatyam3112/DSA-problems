class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       /* unordered_map<char,int>mp;
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
               if(board[i][j]=='.')continue;
                mp[board[i][j]]++;
                
            }
            for(auto it:mp)
                if(it.second>1)return false;
            mp.clear();
            
        }
         for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
                if(board[j][i]=='.')continue;
                mp[board[j][i]]++;
                
            }
            for(auto it:mp)
                if(it.second>1)return false;
            mp.clear();
             
         }
        int limiti=3,limitj=3,j=0,nowi=0,nowj=0,i=0;
        while(limiti<10)
        {
            for( i=nowi;i<limiti;i++)
            {
                for(j=nowj;j<limitj;j++)
                {
                    if(board[i][j]=='.')continue;
                    
                    mp[board[i][j]]++;
                }
            }
             for(auto it:mp)
                if(it.second>1)return false;
            mp.clear();
            nowj+=3;limitj+=3;
            //nowi=0;
            if(limitj>8)
            {
                nowi+=3;nowj=0;limiti+=3;limitj=3;
                
            }   
            
        }
    return true;*/
        unordered_map<char,int>mp;
	
	//\U0001f525✅ for checking the rows horizontally \U0001f525✅
    for(int i=0;i<board.size();i++)
    {
        for(int j=0;j<board[i].size();j++)
        {
            if(board[i][j]=='.') continue;
            mp[board[i][j]]++;
        }
        for(auto i:mp) if(i.second>1) return false;
        mp.clear();
    }
	//\U0001f525✅ for checking the rows vertically \U0001f525✅
     for(int i=0;i<board.size();i++)
    {
        for(int j=0;j<board[i].size();j++)
        {
            if(board[j][i]=='.') continue;
            mp[board[j][i]]++;
        }
        for(auto i:mp) if(i.second>1) return false;
        mp.clear();
    }
    int limiti=3, limitj=3; int j=0, nowj=0,nowi=0;
	//\U0001f525✅ for checking all 3x3 blocks \U0001f525✅
    while(limiti<10)
    {
        for(int i=nowi;i<limiti;i++)
        {
            for(j=nowj;j<limitj;j++)
            {
                if(board[i][j]=='.') continue;
                mp[board[i][j]]++;
            }
        }
        for(auto i : mp) if(i.second>1) return false;
        mp.clear();  nowj+=3; limitj+=3;
        if(nowj>8)
        {
            nowj=0; limitj=3; nowi+=3; limiti+=3;
        }
    }
    return true;
        
            
            
    }
};