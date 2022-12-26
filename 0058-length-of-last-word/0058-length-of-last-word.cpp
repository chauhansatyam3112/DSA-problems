class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=0,j=0;int len=0;
        while(i<s.length())
        {
            if(s[i]!=' '){
                i++;
            len=i-j;}
            else{
                
                //len=i-j+1;
                
        while(s[i]==' '&& i<s.length())
        {
            i++;
        }
           j=i;
        
               }
            
            
        }
        return len;
        
    }
};