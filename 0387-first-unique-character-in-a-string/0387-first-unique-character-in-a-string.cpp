class Solution {
public:
    int firstUniqChar(string s) {
        
        
        unordered_map<char,vector<int>>mp;
        
        for(int i=0;i<s.length();i++)
        {
           mp[s[i]].push_back(i);
           
        }
        
       
        
        vector<int>v;
        
        for(auto it:mp) {
           
            vector<int>temp=it.second;
            
            if(temp.size()>=2)continue;
            
            else
            {
                v.push_back(temp[0]);
            }
           
          }
        
        if(v.empty())return -1;
        
        sort(v.begin(),v.end());
        
        return v[0];
    }
};