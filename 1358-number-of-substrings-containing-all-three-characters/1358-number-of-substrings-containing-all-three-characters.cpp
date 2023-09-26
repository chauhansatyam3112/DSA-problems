class Solution {
public:
    int numberOfSubstrings(string s) {
        
        unordered_map<char,int>mp;
        
        int cnt=0;
        
        int i=0,j=0;
        int len=0;
        int end=s.length()-1;
        
        while(i<s.length()){
            
            mp[s[i]]++;
            
            while(mp['a'] && mp['b'] && mp['c'])
            {
                cnt+=1+(end-i);
                
                mp[s[j]]--;
                j++;
                
            }
            i++;
            
          
        }
    return cnt;
    }
};