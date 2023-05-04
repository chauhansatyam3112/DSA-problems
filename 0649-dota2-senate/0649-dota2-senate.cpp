class Solution {
public:
    string predictPartyVictory(string senate) {
        
        
        stack<char>st;
        string temp="";
        
        for(int i=0;i<senate.length();i++)
        {
           
            if(st.empty())
                st.push(senate[i]);
            else{
                if(st.top()!=senate[i]){
                    char c=st.top();
                    senate+=c;
                     st.pop();
                   // i++;
                }
            else
            {
                st.push(senate[i]);
            }
                
           
          }
          
        }
        char c=st.top();
        if(c=='R')
            return "Radiant";
        else
            return "Dire";
        
      
    }
};