class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int len=s.length();
        vector<int>ans(len,INT_MAX);
        int pos=-1;
        for(int i=0;i<len;i++)
        {
            if(s[i]==c)
            {
                pos=i;
            }
            if(pos!=-1){
                ans[i]=i-pos;
            }
            
        }
         pos=-1;
         for(int i=len-1;i>=0;i--)
        {
            if(s[i]==c)
            {
                pos=i;
            }
            if(pos!=-1){
                ans[i]=min(ans[i],pos-i);
            }
            
        }
        return ans;
    }
};