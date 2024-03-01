class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        
        int n=s.length();
        
        int ones=0,zero=0;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')ones++;
            else
                zero++;
        }
        string ans;
         
        if(ones==1)
        {
            
           
            while(zero--)
            {
                ans+='0';
            }
            ans+='1';
         
         return ans; 
        }
        else{
            
       int t=ones-1;
       
        
        while( t--)
        {
            ans+='1';
            
            
            
        }
      while(zero--)
      {
          ans+='0';
      }
            ans+='1';
        }
        return ans;
    }
};