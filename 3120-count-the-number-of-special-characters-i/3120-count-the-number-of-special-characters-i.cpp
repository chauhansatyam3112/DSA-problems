class Solution {
public:
    int numberOfSpecialChars(string word) {
        
          set<char>st;
        
        for(int i=0;i<word.length();i++)
        {
            st.insert(word[i]);
        }
        
        int cnt=0;
        
        
        
        
        for(auto it:st)
        {
            if(isupper(it))
            {
                auto itr=st.find(tolower(it));
                
                if(itr!=st.end())
                {
                    cnt++;
                    st.erase(itr);
                   
                }
            }
            
          else  if(islower(it))
            {
                auto itr=st.find(toupper(it));
                
                if(itr!=st.end())
                {
                    cnt++;
                    st.erase(itr);
                    
                }
            }
        }
        
        return cnt;
    }
};