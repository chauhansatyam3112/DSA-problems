class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int len=0;
        int maxi=0;
        
        unordered_map<char,int>mp;
       
        int i=0,j=0;
        while(j<s.length())
        {
            
           mp[s[j]]++;
            
         
            
           while(mp[s[j]]>1)
           {
               mp[s[i]]--;
               i++;
           }
            j++;
            maxi=max(maxi,j-i);
        }
        return maxi;
    }
};