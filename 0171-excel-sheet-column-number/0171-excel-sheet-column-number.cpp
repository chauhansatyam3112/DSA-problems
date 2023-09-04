class Solution {
public:
    int titleToNumber(string col) {
        
        
    int n=col.length();
        
        if(n==1)
        {
            return (col[0]-'A')+1;
        }
        
        int ans=0;
        int incr=0;
        
        for(int i=n-1;i>=0;i--)
        {
            int pos=(col[i]-'A')+1;
            
            ans=ans+(pos*pow(26,incr++));
        }
        return ans;
    }
};