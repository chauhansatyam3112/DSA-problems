class Solution {
public:
    string smallestSubsequence(string s) {
        stack<char>st;
        vector<bool>seen(26,false);
        vector<int>lastidx(26,0);
        for(int i=0;i<s.length();++i)
        {
           lastidx[s[i]-'a']=i;
        }
        for(int i=0;i<s.length();++i)
        {
            int curr=s[i]-'a';
                if(seen[curr])
                    continue;
            
            while(!st.empty()&& st.top()>s[i] && (i<lastidx[st.top()-'a'])){
                seen[st.top()-'a']=false; st.pop();}
            st.push(s[i]);
            seen[curr]=true;
        }
        string ans="";
        while(!st.empty())
        {
            ans+=st.top();st.pop();
        }reverse(ans.begin(),ans.end());
        return ans;
            
            
        
    }
};