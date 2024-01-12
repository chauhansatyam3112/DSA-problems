class Solution {
public:
    bool halvesAreAlike(string s) {
        
        int n=s.length();
        
        int cnt1=0,cnt2=0;
            
            for(int i=0;i<s.length()/2;i++)
            {
                if(s[i]=='A' or s[i]=='a' or s[i]=='e' or s[i]=='E' or s[i]=='i' or s[i]=='I' or s[i]=='o' or s[i]=='O' or s[i]=='U' or s[i]=='u' ) 
                    
                    cnt1++;
                
                if(s[n-i-1]=='A' or s[n-i-1]=='a' or s[n-i-1]=='e' or s[n-i-1]=='E' or s[n-i-1]=='i' or s[n-i-1]=='I' or s[n-i-1]=='o' or s[n-i-1]=='O' or s[n-i-1]=='U' or s[n-i-1]=='u' ) 
                    
                    cnt2++;
            }
        
        return cnt1==cnt2;
    }
};