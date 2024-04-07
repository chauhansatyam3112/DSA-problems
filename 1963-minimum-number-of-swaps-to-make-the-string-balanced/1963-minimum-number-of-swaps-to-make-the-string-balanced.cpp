class Solution {
public:
    int minSwaps(string s) {
        
        int cnt=0,swaps=0;
        
        int j=s.length()-1;
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='[')cnt++;
            
            else{
                cnt--;
            }
            
            if(cnt<0)
            {
                while(i<j && s[j]!='[')j--;
                
                swap(s[i],s[j]);
                
                swaps++;
                
                cnt=1;
            }
        }
        
        return swaps;
    }
};