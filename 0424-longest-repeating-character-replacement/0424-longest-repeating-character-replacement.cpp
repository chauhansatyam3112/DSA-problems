class Solution {
public:
    int characterReplacement(string s, int k) {
        
        //abcccde
        //for this string if we have to do minimal changes so that all the string
        // become same,then we will first check for maximaxl frequenct char
        // and subtract it from the len of the string
        // c->3
        //7-3=4 replacements needed
        
//         now here 4 is k form the netire string;
        
//         so for every window if we just calculate the no freq of every chars and find 
//         we will get the ans;
        
        // len of substring-no of most requnet char in that substring<=k;
        
        
        unordered_map<char,int>mp;
        int j=0;
        int cnt=0,maxi=0,ans=0;
      for(int i=0;i<s.length();i++)
      {
          mp[s[i]]++;
          
         maxi=max(mp[s[i]],maxi);
          
          if(i-j+1-maxi>k)
          {
              mp[s[j]]--;
              j++;
              
          }
          
          ans=max(ans,i-j+1);
          
      }
        return ans;
    }
};