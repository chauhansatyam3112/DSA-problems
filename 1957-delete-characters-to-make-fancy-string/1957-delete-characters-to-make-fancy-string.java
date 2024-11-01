class Solution {
public:
    string makeFancyString(string s) {
        
        int cnt=0;string ans="";
        
        // "abbcccddddeeeee"
        
//         abb
        
        stack<char>st;
        
        for(int i=0;i<s.length();i++)
        {
            
            if(st.empty() || st.top()!=s[i])
            {
                st.push(s[i]);
                cnt=1;
            }
            else if(st.top()==s[i])
            {
                cnt++; st.push(s[i]);
            }
            
            if(cnt>=3)
            {
                while(!st.empty() && cnt>=3)
                {
                    st.pop();
                    cnt--;
                }
            }
            
            
           
            
        }
        
        while(!st.empty())
        {
            ans+=st.top();st.pop();
        }
        reverse(ans.begin(),ans.end());
        
        return ans;
        
    
        
    }
};