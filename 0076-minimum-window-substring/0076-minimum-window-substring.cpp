class Solution {
public:
    string minWindow(string s, string t) {
        
        
        int i=0,j=0;
        
        int minilen=INT_MAX;
        
        int start=0;
        
        int cnt=t.length();
        
        unordered_map<char,int>mp;
        
        int n=s.length();
        
        for(auto it:t)mp[it]++;
        
        while(j<n)
        {
            if(mp[s[j]]>0)
            {
                cnt--;
                
            }
            
            mp[s[j]]--;
            
            while(cnt==0)
            {
                if(minilen>(j-i+1))
                {
                    minilen=j-i+1;
                    start=i;
                }
                
                mp[s[i]]++;
                
                if(mp[s[i]]>0)
                {
                    cnt++;
                }
                
                i++;
                
            }
            j++;
        }
        
        return minilen==INT_MAX?"":s.substr(start,minilen);
    }
};