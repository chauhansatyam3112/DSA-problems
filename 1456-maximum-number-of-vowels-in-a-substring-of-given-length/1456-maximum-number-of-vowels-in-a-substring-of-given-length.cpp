class Solution {
public:
    int maxVowels(string s, int k) {
        
     long  long  int i=0;
     long  long  int j=0;
      int maxi=INT_MIN;
      int  cnt=0;
        
        //abciiidef
        
        while(j<=s.length())
        {
            if(j-i+1<=k)
            {
                if(s[j]=='a'|| s[j]=='e'|| s[j]=='i'|| s[j]=='o'|| s[j]=='u')
                {
                    cnt++;
                    maxi=max(cnt,maxi);
                }
              j++;
            }
             if(j-i+1>k){
                if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u')
                cnt--;
                i++;
            }
          
            
        }
        return maxi==INT_MIN?0:maxi;
    }
};