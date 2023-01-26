class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        map<char,vector<int>>mp;
        int i=0;
        for(int j=0;j<s.size();j++)
        {
            mp[s[j]].push_back(i++);
        }
        int cnt=0;
        for(int i=0;i<words.size();i++)
        {
            string str=words[i];
            int latest=-1;
            for(int j=0;j<str.size();j++)
            {
               auto it=upper_bound(mp[str[j]].begin(),mp[str[j]].end(),latest);
                   if(it==mp[str[j]].end())
                       break;
                   
                   latest=*it;
                if(j==str.size()-1)
                    cnt++;
            }
        }
        return cnt;
    }
};