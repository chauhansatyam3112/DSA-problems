class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<pair<char,int>>st;
        string ans="";
        for(int i=0;i<s.size();++i)
        {
            if(s[i]=='(')
                st.push({s[i],i});
            
            else if(s[i]==')' && !st.empty() && st.top().first=='(')
               st.pop();
                else if(s[i]==')')
                    st.push({s[i],i});
                
        }
        while(!st.empty())
        {
            s.erase(s.begin()+st.top().second);
            st.pop();
        }
        return s;
    }
};