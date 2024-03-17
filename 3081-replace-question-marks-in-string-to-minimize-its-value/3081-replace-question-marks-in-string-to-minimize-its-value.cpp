class Solution {
public:
    string minimizeStringValue(string s) {
        
        unordered_map<char,int>mp;
        
       multiset<pair<int,char>>st;
        
        for(auto it:s)
        {
            mp[it]++;
        }
        
        for(char ch='a';ch<='z';ch++)
        {
            st.insert({mp[ch],ch});
        }
        
        vector<char>ans;
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='?')
            {
                pair<int,char>pr=*st.begin();
                
                st.erase(pr);
                
                ans.push_back(pr.second);
                
                mp[pr.second]++;
                
                
                
                st.insert({mp[pr.second],pr.second});
                
                
            }
            else{
                ans.push_back(s[i]);
            }
        }
        
       string res="";
        
        string temp="";
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='?')
            {
                temp.push_back(ans[i]);
            }
            
            
        }
        
        sort(temp.rbegin(),temp.rend());
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='?')
            {
                
                res.push_back(temp.back());
                temp.pop_back();
                
            }
            else{
                res.push_back(ans[i]);
            }
        }
        
        return res;
        
        
    }
};