//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:

bool solve(vector<int>&nums,int sum,int idx,int res,vector<vector<int>>&dp)
{
    if(idx>=nums.size() && sum!=res)return false;
    
    
   if(res==sum)return true;
  if(dp[idx][res]!=-1)return dp[idx][res];
   bool x=solve(nums,sum,idx+1,res+nums[idx],dp);
  
   bool x1=solve(nums,sum,idx+1,res,dp);
   
   return dp[idx][res]=(x1 or x);
}
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        // wo kala ek baasuriwala
        int n=arr.size();
        vector<vector<int>>dp(n+1,vector<int>(1e5+1,-1));
        
       return  solve(arr,sum,0,0,dp);
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends