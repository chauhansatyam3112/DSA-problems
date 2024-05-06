class Solution {
public:
    int minAnagramLength(string s) {
        
            unordered_map<char,int>mp;
            
            for(int i=0;i<s.length();i++)
            {
                    mp[s[i]]++;
            }
            
           vector<int>v;
            
            for(auto it:mp)
            {
                    v.push_back(it.second);
            }
            
            int gcd=0;
            
           for(int i=0;i<v.size();i++)
           {
                   gcd=__gcd(v[i],gcd);
           }
            
            int n=s.length();
            
            return n/gcd;
            
    }
};