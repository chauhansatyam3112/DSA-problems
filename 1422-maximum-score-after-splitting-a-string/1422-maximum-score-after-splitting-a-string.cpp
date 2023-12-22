class Solution {
public:
    int maxScore(string s) {
        
        int cnt=0,maxi=INT_MIN;
        vector<int>v1(s.length()),v2(s.length());
        
        for(int i=0;i<s.length();i++)
        {
           if(s[i]=='0')
           {
               v1[i]= ++cnt;
           }
            
        else{
            v1[i]=0;
        }
      
        }
        
        cnt=0;
        
        for(int i=s.length()-1;i>=0;i--)
        {
           if(s[i]=='1')
           {
               v2[i]=++cnt;
           }
            else{
                v2[i]=0;
            }
      
        }
        
        for(int i=0;i<s.length()-1;i++)
        {
            int p=v1[i]+v2[i+1];
            
            maxi=max(maxi,p);
            
        }
        return maxi;
        
        
    }
};