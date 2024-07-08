class Solution {
public:
    string clearDigits(string s) {
        
        stack<char>st;
        
          for(int i=0;i<s.length();i++)
            {
                if(!st.empty() && isdigit(s[i]))
                {
                    st.pop();
                }
              else{
                  st.push(s[i]);
              }
            }
        
        string ans="";
        
        if(st.empty())return "";
        else{
            while(!st.empty())
            {
                ans+=st.top();
                st.pop();
            }
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};