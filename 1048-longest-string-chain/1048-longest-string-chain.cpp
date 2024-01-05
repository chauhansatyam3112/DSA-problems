class Solution {
public:
    static bool comp(string &str1,string &str2)
    {
        return str1.length()<str2.length();
    }
    
    bool isPossible(string &big,string &smol)
    {
        
        int n=big.length(),m=smol.length();
        
        if(n!=m+1)return false;
        
        int i=0,j=0;
        
        while(i<n)
        {
            if(big[i]==smol[j])
            {
                i++;j++;
            }
            else{
                i++;
            }
        }
        return (i>=n && j>=m);
    }
    int longestStrChain(vector<string>& words) {
        
        int maxi=1;int cnt=0;
//         for(int i=0;i<words.size();i++)
//         {
//             string str=words[i];
//              int k=0;
//             for(int j=0;j<words.size();j++)
//             {
//                 string str1=words[j];
//                 int n=str1.size();
                
//                 if(i!=j )
//                 {
//                     if(str.length()!=words[j].length()+1)
//                     {
//                         continue;
//                     }
                    
                   
//                     string s2;
                    
//                     string s1=str1.substr(0,k);
//                     if(k!=(str1.size()-1))
                        
//                      s2=str1.substr(k+1,n-k-1);
                    
//                     else
//                          s2=str1.substr(k+1,n-k);
                    
//                         string res=s1+s2;
                    
//                     if(res==str)
//                     {
//                         cnt++;
//                     }
//                     k++;
                       
//                 }
//             }
//             maxi=max(maxi,cnt);
//             cnt=0;
            
//         }
//         return maxi;
        
        int n=words.size();
        
        sort(words.begin(),words.end(),comp);
        
        vector<int>dp(n,1);
        
        for(int i=0;i<n;i++)
        {
            for(int prev=0;prev<i;prev++)
            {
                if(isPossible(words[i],words[prev]) && 1+dp[prev]>dp[i])
                {
                    dp[i]=1+dp[prev];
                }
            }
            maxi=max(dp[i],maxi);
        }
        return maxi;
    }
};