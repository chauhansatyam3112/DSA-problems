class Solution:
    
    def solve(self,i,j,s,dp):
        
        if i>=j:
            return True
        
        
        
        if dp[i][j]!=-1:
            return dp[i][j]
        
        if s[i]==s[j]:
            
            dp[i][j] = self.solve(i + 1, j - 1, s, dp)
            
            
        
        else:
            
            dp[i][j]=False
            
            
        
        return dp[i][j]
    
    
    
    
    
    def longestPalindrome(self, s: str) -> str:
        
        n = len(s)
        
        dp = [[-1] * n for _ in range(n)]
        
        maxi = 0
        start = 0
        
        
        for i in range(n):
            for j in range(i,n):
                
                if self.solve(i,j,s,dp) and j-i+1>maxi:
                    
                    maxi=j-i+1
                    
                    start=i
    
       
        return s[start:start + maxi]
                
        
       