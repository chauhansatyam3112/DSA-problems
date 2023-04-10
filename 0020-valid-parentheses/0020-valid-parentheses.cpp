class Solution {
public:
    bool check(char x,char y)
    {
        return ((x=='('&& y==')') ||( x=='[' && y==']') || (x=='{' && y=='}'));
     }
    
    bool isValid(string s) {
        
        if(s.size()==1)
        {
            return false;
        }
        stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                st.push(s[i]);
            }
            else if( !st.empty() && (s[i]==')' || s[i]=='}' || s[i]==']'))
            {
                char p=st.top();
                if(check(p,s[i]) && !st.empty())
                {
                    st.pop();
                    
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
            
        }
        if(st.empty()==false)
        {
            return false;
        }
        return true;
                        
    }
};