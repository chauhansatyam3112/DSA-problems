class Solution {
public:
    string getSmallestString(string s, int k) {
        
         // xaxcd k=4;
        
        string ans="";
        
        for(int i=0;i<s.length();i++)
        {
            for(char charr='a';charr<='z';charr++)
            {
                int mini=min(((s[i]-charr+26)%26),((charr-s[i]+26)%26));
                
                if(mini<=k)
                {
                    k-=mini;
                    
                    ans+=(charr);
                    break;
                }
               
                
            }
        }
        
        return ans;
    
    }
};