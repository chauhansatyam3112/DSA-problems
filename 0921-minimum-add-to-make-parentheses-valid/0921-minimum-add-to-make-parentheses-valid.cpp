class Solution {
public:
    int minAddToMakeValid(string s) {
        int open=0;
        int res=0;
        for(int i=0;i<s.length();++i)
        {
            if(s[i]=='(')
                open++;
            else
                open--;
            if(open==-1)
            {
                open=0;
                res++;
            }
        }
        return open+res;
    }
};