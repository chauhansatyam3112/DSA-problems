class Solution {
public:
    int maxDepth(string s) {
        int depth=0;int open=0;
        int maxi=INT_MIN;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(')
            open++;
        if(s[i]==')')
            open--;
        maxi=max(open,maxi);
    }
        return maxi;
    }
};