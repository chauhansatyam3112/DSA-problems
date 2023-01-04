class Solution {
public:
    int countCharacters(vector<string>& v, string chars) {
        map<char,int>mp,pm;
        int t=0;
       // bool falg=true;
        for(auto it:chars)
        {
            mp[it]++;
        }
        for(int i=0;i<v.size();i++)
        {
            pm=mp;
            bool  flag=true;
            for(int j=0;j<v[i].size();j++)
            {
                pm[v[i][j]]--;
                if(pm[v[i][j]]<0)
                {
                    flag=false;break;
                }
                
            }
            if(flag)
                t+=v[i].size();
            
        }
        return t;
    }
};