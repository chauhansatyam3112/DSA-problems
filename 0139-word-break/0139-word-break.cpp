class Solution {
public:
     unordered_map<int,bool>mp;
    bool solve(set<string>&st,int idx,string s)
    {
        if(idx>=s.length())
            return true;
        
        if(mp.count(idx))  return mp[idx];
     
         string temp;   
      for(int i=idx;i<s.length();i++)
      {
          
          temp+=s[i];
       
          if(st.find(temp)!=st.end())
          {
              if(solve(st,i+1,s)) return mp[idx]=true;
              
          }
          
         
          
          
      }
        return mp[idx]=false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        
        set<string>st;
        
        st.insert(wordDict.begin(),wordDict.end());
        
      return  solve(st,0,s);
    }
};