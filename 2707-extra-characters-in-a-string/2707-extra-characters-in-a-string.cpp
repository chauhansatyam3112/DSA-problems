class Solution {
public:
    int minExtraChar(string s, vector<string>& dict) {
        
        
        int n=s.length();
        unordered_set<string>st;
        for(auto it:dict)
        {
            st.insert(it);
        }
        
        // for(int i=0;i<dict.size();i++)
//         {
//             int found=s.find(dict[i]);
            
//             if(found!=string::npos)
//             {
//                 s.erase(found,dict[i].length());
//             }
//         }
        vector<int>dp(n+1,0);
        for(int i=1;i<=n;i++)
        {
            dp[i]=dp[i-1]+1;
            for(int j=i;j>=1;j--)
            {
                string str=s.substr(j-1,i-j+1);
                if(st.find(str)!=st.end())
                {
                    dp[i]=min(dp[i],dp[j-1]);
                }
            }
           
        
        }
         return dp[n];
        
//         
//         return s.length();
        
        
    }
};