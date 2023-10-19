class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        stack<char>st,ts;
        
        for(auto it:s)
        {
           if(it!='#')st.push(it);
            
           if(it=='#' && !st.empty())
           {
               st.pop();
           }
        }
        
        for(auto it:t)
        {
            if(it!='#')ts.push(it);
            
            if(it=='#' && !ts.empty())
            {
                ts.pop();
            }
            
        }
        return st==ts;
    }
};