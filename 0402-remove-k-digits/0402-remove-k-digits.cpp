class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.length() <= k)   
            return "0";
         if(k == 0)
            return num;
        
        
       // int i=1;
        stack<char>st;
        st.push(num[0]);
        for(int i=1;i<num.size();i++)
        {
            while(!st.empty()&& st.top()>num[i] && k>0)
            {
                st.pop();--k;
                
            }
            
            st.push(num[i]);
            if(st.size()==1 && num[i]=='0')
            st.pop();
        }
        
        while(!st.empty() && k)
        {
            st.pop();--k;
        }
        string ans="";
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        if(ans.length() == 0)
            return "0";
        return ans;
    }
};