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
       int limiti=3, limitj=3; int j=0, nowj=0,nowi=0;
	
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
    return true;*/
        set<string>s;
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    string row=board[i][j]+to_string(i)+"row";
                    string col=board[i][j]+to_string(j)+"col";
                    string box="box"+to_string((i/3)*3+(j/3))+board[i][j];
                    
                
                if(s.find(row)==s.end() && s.find(col)==s.end() && s.find(box)==s.end())
                {
                    s.insert(row);s.insert(col);s.insert(box);
                }else
                {
                return false;
                    
                }
                }
            }
        }return true;
        
            
            
    }
};