class Solution {
public:
//     int countPali(string &s,int left,int right)
//     {
//         int res=0;
//         while(left>=0 &&  right<s.size()&& s[left]==s[right]){
//             res++;
//         left--;right++;}
//         return res;
        
//     }
    
    int countSubstrings(string s) {
//         int ans=0;
//         for(int i=0;i<s.size();i++)
//         {
            
        
//            int left=i,right=i;
//         ans+=countPali(s,i,i);
//             ans+=countPali(s,i,i+1);
        
//      }
//          return ans;
        int cnt=0;
        int n=s.length();
        
        bool dp[n][n];
        for(int gap=0;gap<n;gap++)
        {
            for(int i=0,j=gap;j<n;j++,i++)
            {
                if(gap==0)
                    dp[i][j]=true;
                else if(gap==1)
                {
                    if(s[i]==s[j])
                        dp[i][j]=true;
                    else
                        dp[i][j]=false;
                }else
                {
                    if(s[i]==s[j] && dp[i+1][j-1]==true)
                        dp[i][j]=true;
                    else
                        dp[i][j]=false;
                    
                }
                if(dp[i][j]==true)
                    cnt++;
            }
            
        }
        return cnt;
        
    }
};