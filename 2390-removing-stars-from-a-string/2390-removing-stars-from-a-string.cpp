class Solution {
public:
    string removeStars(string s) {
//         stack<char>st;
        
        
        
        
//         for(int i=0;i<s.length();i++)
//         {
//             if(s[i]!='*')
//             {
//                 st.push(s[i]);
//             }
//             else if(!st.empty())
//             {
//                 st.pop();
//             }
               
            
//         }
//         string str;
//         while(!st.empty())
//         {
//             str+=st.top();st.pop();
            
//         }
//         reverse(str.begin(),str.end());
//         return str;
        int j=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='*')
            {
                j--;
            }
            else{
                s[j++]=s[i];
            }
            
        }
        return s.substr(0,j);
        
    }
};