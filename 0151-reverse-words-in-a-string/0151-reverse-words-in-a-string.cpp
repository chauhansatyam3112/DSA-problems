class Solution {
public:
    string reverseWords(string s) {
        
        
        int j=0;
        
    string ans;
        
        for(int i=0;i<s.length();)
        {
            while(s[i]==' ' && i<s.length())
            {
                i++;
            }
            
            if(i>=s.length())break;
            
            j=i;
            
            while(s[j]!=' ' && j<s.length())
            {
                j++;
            }
            
            
            string p=s.substr(i,j-i);
          
            if(ans.length()==0) ans=p;
            
            else
                ans=p+' '+ans;
            
            i=j+1;
                
        }
        return ans;
    }
};