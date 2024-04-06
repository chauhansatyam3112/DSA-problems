class Solution {
public:
    string minRemoveToMakeValid(string s) {
        
        int open=0,close=0;
        string res="";
        string ans="";
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='a'&& s[i]<='z')
            {
                res.push_back(s[i]);
            }
            
            else if(s[i]=='(')
            {
                open++;
                res.push_back(s[i]);
            }
            
            else if(open>0)
            {
                open--;
                res.push_back(s[i]);
            }
        }
        
        for(int i=res.length()-1;i>=0;i--)
        {
            if(res[i]>='a'&& res[i]<='z')
            {
                ans.push_back(res[i]);
            }
            
            else if(res[i]==')')
            {
                close++;
                
                ans.push_back(res[i]);
                
                
            }
            
            else if(close>0)
            {
                close--;
                ans.push_back(res[i]);
            }
        }
        
        reverse(ans.begin(),ans.end());
        
        
        return ans;
    }
};