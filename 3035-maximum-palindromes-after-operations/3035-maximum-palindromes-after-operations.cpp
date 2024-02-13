class Solution {
public:
    int maxPalindromesAfterOperations(vector<string>& words) {
        
        vector<int>v;
        for(int i=0;i<words.size();i++)
        {
            v.push_back(words[i].length());
        }
        
        sort(v.begin(),v.end());
        
        unordered_map<char,int>mp;
        
        for(auto it:words)
        {
            for(auto itr:it)
            {
                mp[itr]++;
            }
        }
        
        int odd=0,even=0;
        
        for(auto it:mp)
        {
             odd+=(it.second%2);
           
                even+=(it.second/2);
           
        }
        
    int ans=0;
        
        for(int i=0;i<v.size();i++)
        {
            if(v[i]%2==1)
            {
                
                if(odd)
                {
                    odd--;
                }
                else{
                    even--;
                    odd++;
                }
                
            }
            
            if(even< v[i]/2)break;
            
            even-=v[i]/2;
            
            ans++;
            
            
        }
        return ans;
    }
};