class Solution {
public:
    int countPali(string &s,int left,int right)
    {
        int res=0;
        while(left>=0 &&  right<s.size()&& s[left]==s[right]){
            res++;
        left--;right++;}
        return res;
        
    }
    
    int countSubstrings(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            
        
           int left=i,right=i;
        ans+=countPali(s,i,i);
            ans+=countPali(s,i,i+1);
        
     }
        return ans;
        
    }
};