class Solution {
public:
    int partitionString(string s) {
        unordered_map<char,int>mp;
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
           if(mp.find(s[i])!=mp.end())
           {
               ans++;
                mp.clear();
                mp[s[i]]++;
                
           }
            else{
                mp[s[i]]++;
               
            }
        }
       if(mp.size()!=0)
       {
           ans++;
       }
        return ans;
    }
};