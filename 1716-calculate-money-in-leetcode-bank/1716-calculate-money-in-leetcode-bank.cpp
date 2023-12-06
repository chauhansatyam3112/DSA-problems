class Solution {
public:
    int totalMoney(int n) {
        
        int t=n/7;
        
        int q=7;
        
        int ans=0;
        
        for(int i=0;i<t;i++)
        {
            ans+=(q*(q+1)/2);
            q++;
        }
        int r=-1;
        int s=-2;
        
        for(int i=1;i<t;i++)
        {
            
            ans+=(r);
            r=r+s;
            s=s-1;
                
        }
        int last=t+1;
        
        int rem=n%7;
        
        
        
        for(int i=1;i<=rem;i++)
        {
            ans+=(last);
            last++;
        }
        
        return ans;
        
        
        
        
    }
};