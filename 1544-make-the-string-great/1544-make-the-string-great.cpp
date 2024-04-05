class Solution {
public:
    string makeGood(string s) {
        
        stack<char>st;
        
        string ans="";
        
      
        
        for(int i=0;i<s.length();i++)
            
        {
            
            if(!st.empty() && (st.top()>='a'&& st.top()<='z'))
            {
                if(!st.empty() && (s[i]>='A' && s[i]<='Z') && abs(s[i]-st.top())==32)
                {
                    st.pop();
                    continue;
                }
            }
            
             else if (!st.empty() && (st.top()>='A' && st.top()<='Z'))
            {
                if(!st.empty() && (s[i]>='a' && s[i]<='z') && abs(s[i]-st.top())==32)
                {
                    st.pop();
                    continue;
                }
            }
            
           st.push(s[i]);
        }
        
        while(!st.empty())
        {
            ans=st.top()+ans;
            st.pop();
        }
        
        return ans;
        
        
    }
};