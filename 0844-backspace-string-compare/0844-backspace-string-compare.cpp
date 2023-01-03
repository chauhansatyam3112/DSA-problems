class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<int>st;
        stack<int>ts;
        for(int i=0;i<s.size();i++)
        {
            if(!st.empty()&& s[i]=='#')
                st.pop();
            else if(s[i]!='#')
                st.push(s[i]);
        }
        for(int i=0;i<t.size();i++)
        {
            if(!ts.empty()&& t[i]=='#')
                ts.pop();
            else if(t[i]!='#')
                ts.push(t[i]);
        }
        return st==ts;
    }
};