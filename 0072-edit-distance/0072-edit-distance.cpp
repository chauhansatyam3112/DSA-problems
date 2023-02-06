class Solution {
public:
   int solve(string &word1,string &word2,int i,int j,vector<vector<int>>&dp)
   {
       if(i<0) return j+1;
       if(j<0)return i+1;
       
       if(dp[i][j]!=-1)
           return dp[i][j];
       
       if(word1[i]==word2[j])
           return dp[i][j]=solve(word1,word2,i-1,j-1,dp);
       
           return dp[i][j]= 1+min(solve(word1,word2,i-1,j-1,dp),min(solve(word1,word2,i-1,j,dp),solve(word1,word2,i,j-1,dp)));
           
       
    }
    int minDistance(string word1, string word2) {
        vector<vector<int>>dp(word1.length(),vector<int>(word2.length(),-1));
        int n=word1.length(),m=word2.length();
        return solve(word1,word2,n-1,m-1,dp);
//        int dp[word1.size()+1][word2.size()+1];

//         for(int k=0; k<=word1.size(); k++)
//             dp[k][0] = k;

//         for(int k=0; k<=word2.size(); k++)
//             dp[0][k] = k;
 
//         for(int i=1; i<=word1.size(); i++){
//             for(int j=1; j<=word2.size(); j++){

//                 if(word1[i-1] == word2[j-1])
//                     dp[i][j] = dp[i-1][j-1];

//                 else
//                     dp[i][j] = 1 + min({dp[i][j - 1], 
//                                    dp[i - 1][j],
//                                    dp[i - 1][j - 1]});  
//             }
//         }
        
//         return dp[word1.size()][word2.size()];
    }
};