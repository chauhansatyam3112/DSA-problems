class Solution {
public:
    int findTheLongestSubstring(string s) {
       
        int mask=0;
        int maxi=0;
        
        
         string str="aeiou";
        map<int,int>mp;
        mp[0]=-1;
        for(int i=0;i<s.length();i++)
        {
            for(int j=0;j<5;j++)
            {
                if(s[i]==str[j])
                {
                    mask=mask ^ (1<<j);
                    break;
                }
            }
            if(mp.find(mask)==mp.end())
            {
                mp[mask]=i;
            }
            maxi=max(maxi,i-mp[mask]);
            
        }
        return maxi;
    }
};