class Solution {
public:
    string reverseParentheses(string s) {
        
        stack<char>st;
        
        for(int i=0;i<s.length();i++)
        {
           if(s[i]=='(' || (s[i]>='a' && s[i]<='z'))
           {
               st.push(s[i]);
           }
            
            else{
                
                string temp="";
                
                
                while(!st.empty() && st.top()!='(')
                {
                    
                    temp+=st.top();
                    st.pop();
                    
  
                }
                
                st.pop();
                
                for(int i=0;i<temp.length();i++)
                {
                    st.push(temp[i]);
                }
                
                temp.clear();
                
            }
        }
        
        string ans="";
        
        while(!st.empty())
        {
            ans+=st.top();st.pop();
        }
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
    
    
};