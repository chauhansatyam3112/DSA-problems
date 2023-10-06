class Solution {
public:
    int integerBreak(int n) {
        
        
        if(n==2)
        {
            return 1;
        }
        
        if(n==3)
        {
            return 2;
        }
        
        if(n==4)
        {
            return 4;
        }
        
        
        int num=0;
        
        int ans=1;
        
        if(n%3==0)
        {
            int p=n/3;
            
            while(p--)
            {
                ans*=3;
                
            }
            return ans;
        }
        
        while((n-num)!=1)
        {
            num+=3;
            
           if(n-(num+3)<=1)
           {
               break;
           }
        }
        int q=num/3;
        while(q--)
        {
            ans*=3;
        }
        ans*=(n-num);
        
        return ans;
    }
};