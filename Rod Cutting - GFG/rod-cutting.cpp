//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
  
//   int solve(int price[],int n,int idx,vector<vector<int>>&dp)
//   {
      
//       if(idx==0)
//       {
//         return price[0]*n;
//       }
      
//       if(dp[idx][n]!=-1)return dp[idx][n];
      
//       int x1=INT_MIN;
//       int rodlen=idx+1;
      
//       if(rodlen<=n) x1=price[idx]+solve(price,n-rodlen,idx,dp);
      
//       int x2=solve(price,n,idx-1,dp);
      
      
      
      
//       return dp[idx][n]= max(x1,x2);
//   }
    int cutRod(int price[], int n) {
        //code here
        vector<vector<int>>dp(n,vector<int>(n+1,0));
        
    //   return solve(price ,n,n-1,dp);
    
    for(int i=0;i<=n;i++)
    {
        dp[0][i]=price[0]*i;
    }
    
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            int x1=INT_MIN;
            
       int rodlen=i+1;
      
      if(rodlen<=j) x1=price[i]+dp[i][j-rodlen];
      
      int x2=dp[i-1][j];
      
      
      
      
       dp[i][j]= max(x1,x2);
      
        }    
        
    }
    return dp[n-1][n];
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends