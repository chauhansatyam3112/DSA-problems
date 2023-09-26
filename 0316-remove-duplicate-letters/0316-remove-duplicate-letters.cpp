class Solution {
public:
    string removeDuplicateLetters(string s) {
        
        vector<int>v(26,0);
        
        vector<bool>seen(26,false);
        
        stack<char>st;
         string ans;
        for(int i=0;i<s.length();i++)
        {
            v[s[i]-'a']=i;
        }
        
        for(int i=0;i<s.length();i++)
        {
            
           if(seen[s[i]-'a']==true)continue;
            
           while(!st.empty() && s[i]<st.top() && i<v[st.top()-'a'])
           {
               seen[st.top()-'a']=false;
               st.pop();
           }
           
               
             st.push(s[i]);
             seen[s[i]-'a']=true;
               
           }
            
        
       while(!st.empty())
       {
           ans+=st.top();
           st.pop();
       }
        reverse(ans.begin(),ans.end());
    
    
       
       return ans;
       
    }
};