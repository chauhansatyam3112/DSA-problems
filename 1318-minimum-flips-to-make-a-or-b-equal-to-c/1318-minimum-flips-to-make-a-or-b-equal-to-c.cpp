class Solution {
public:
    int minFlips(int a, int b, int c) {
        
       int cnt=0;
        
        while(a>0 or b>0 or c>0)
        {
            int x1= a&1;
            int x2= b&1;
            int x3= c&1;
            
            if(x3==0)
            {
                cnt+=(x1+x2);
            }
            else
            {
                if(x1==0 && x2==0)
                {
                    cnt+=1;
                }
                
            }
            a>>=1;
            b>>=1;
            c>>=1;
        }
        return cnt;
    }
};