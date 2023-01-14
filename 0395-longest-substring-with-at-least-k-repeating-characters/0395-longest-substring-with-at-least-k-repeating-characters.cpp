class Solution {
public:
    int longestSubstring(string s, int k) {
         if(s.size() == 0 || k > s.size())   return 0;
        if(k == 0)  return s.size();
        
        vector<int>mp(26,0);
        for(int i=0;i<s.size();i++)
        {
            
            mp[s[i]-'a']++;
            
            
            
         }
        int idx=0;
        while(idx<s.size() && mp[s[idx]-'a']>=k)
            idx++;
          if(idx == s.size()) return s.size();
        
        int str1=longestSubstring(s.substr(0,idx),k);
        int  str2=longestSubstring(s.substr(idx+1),k);
        
        return max(str1,str2);
        
        
       
        
        
    }
};