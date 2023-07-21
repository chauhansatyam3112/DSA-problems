class Solution {
public:
    
    int solve(string& s,int i,int sign,long res)
    {
        if(sign*res>=INT_MAX)
        {
            return INT_MAX;
        }
        
        if(res*sign<=INT_MIN)
        {
            return INT_MIN;
        }
        
        if(i>=s.length()|| s[i]<'0'|| s[i]>'9')
        {
            return sign*res;
        }
        
        res=solve(s,i+1,sign,(res*10+(s[i]-'0')));
        return res;
    }
    int myAtoi(string s) {
        
        
        int i=0,n=s.length(),sign=1;
        
        while(s[i]==' ' && i<n)
        {
            ++i;
        }
        
        if(s[i]=='-')
        {
            sign=-1;
            ++i;
        }
        else if(s[i]=='+')
        {
            ++i;
        }
        
        
       return solve(s,i,sign,0);
    }
};