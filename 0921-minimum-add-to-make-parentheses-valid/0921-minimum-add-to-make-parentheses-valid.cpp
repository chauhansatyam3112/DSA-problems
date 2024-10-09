class Solution {
public:
    int minAddToMakeValid(string s) {
        
        int open=0,cnt=0;
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                cnt++;
            }
            else if(cnt>0){
                cnt--;
            }else{
                open++;
            }
        }
        
        return open+cnt;
    }
};