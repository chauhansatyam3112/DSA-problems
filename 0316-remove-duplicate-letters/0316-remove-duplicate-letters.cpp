class Solution {
public:
    string removeDuplicateLetters(string s) {
        
        
        int n=s.length();
        vector<int>lastIndex(26,0);
        for(int i=0;i<n;i++)
        {
            lastIndex[s[i]-'a']=i;
        }
        
        stack<char>st;
        vector<bool>seen(26,false);
        for(int i=0;i<n;i++)
        {
            if(seen[s[i]-'a'])continue;
            while(st.size()>0 && st.top()>s[i]  && i<lastIndex[st.top()-'a'])
            {
                seen[st.top()-'a']=false;
                st.pop();
            }
            st.push(s[i]);
            seen[s[i]-'a']=true;
        }
        string ans="";
        while(!st.empty() ){
            ans+=st.top();
        st.pop();}
        reverse(ans.begin(),ans.end());
        return ans;
    }
};