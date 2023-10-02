class Solution {
public:
    bool winnerOfGame(string c) {
        
        int cnta=0,cntb=0;
        int movesa=0,movesb=0;
        
        for(int i=0;i<c.size();i++)
        {
            if(c[i]=='A')
            {
                while(c[i]!='B' && i<c.size())
                {
                    cnta++;
                    i++;
                }
            }
            
            if(cnta>=3)
            movesa+=(cnta-2);
            
             cnta=0;
            
            
        }
        for(int i=0;i<c.size();i++)
        {
            if(c[i]=='B')
            {
                while(c[i]!='A' && i<c.size())
                {
                    cntb++;
                    i++;
                }
            }
            if(cntb>=3)
            movesb+=(cntb-2);
            
            cntb=0;
         
            
        }
        if(movesa==0)return false;
        if(movesb==0)return true;
        
//         if(movesa==movesb)return true;
        
//         else if(movesa>1 && movesb==1)
//         {
//             return true;
//         }

//        else if(movesa%2==0 && movesb%2!=0)
//         {
//             return true;
//         }
//         else if(movesa%2==0 && movesb%2==0)
//         {
//             return false;
//         }
//         else if(movesa%2!=0 && movesb%2!=0)
//         {
//             return false;
//         }
        return movesa>movesb;
        return 0;
    }
    
};