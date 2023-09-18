class Solution {
public:
    int maxDepth(string s) {
        int open=0;
        int maxi=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                open++;
                maxi=max(open,maxi);
            }
            if(s[i]==')')
            {
                open--;
            }
            if(s[i]!='(' or s[i]!=')')
            {
                continue;
            }
          
            
        }
        return maxi;
        
    }
};