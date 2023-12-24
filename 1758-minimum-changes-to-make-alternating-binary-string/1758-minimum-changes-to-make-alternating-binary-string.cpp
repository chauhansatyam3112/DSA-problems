class Solution {
public:
    int minOperations(string s) {
        
        
        int cnt1=0,cnt2=0;
        
        for(int i=0;i<s.length();i+=2)
        {
            if(s[i]!='1')cnt1++;
            if(s[i]=='1')cnt2++;
        }
        
        int cnt3=0,cnt4=0;
        for(int i=1;i<s.length();i+=2)
        {
            if(s[i]!='0')
                
                cnt3++;
            
            if(s[i]=='0')
            cnt4++;
        }
        
        return min(cnt1+cnt3,cnt4+cnt2);
    }
};