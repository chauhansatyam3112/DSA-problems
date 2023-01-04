class Solution {
public:
    int balancedStringSplit(string s) {
        int r=0;int l=0;int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='R')
                r++;
            if(s[i]=='L')
                l++;
            if(l==r)
            {
                cnt++;
                
            }
        }
        return cnt;
    }
};