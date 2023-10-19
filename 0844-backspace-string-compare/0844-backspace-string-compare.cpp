class Solution {
public:
    string solve(string str)
    {
        int cnt=0;
        
        string ans;
        
        for(int it=str.length()-1;it>=0;it--)
        {
            if(str[it]=='#')cnt++;
            
            else{
                
                if(cnt>0)
                {
                    cnt--;
                }
                else{
                    ans+=str[it];
                }
            }
        }
        return ans;
    }
    bool backspaceCompare(string s, string t) {
        
        return solve(s)==solve(t);
    }
};