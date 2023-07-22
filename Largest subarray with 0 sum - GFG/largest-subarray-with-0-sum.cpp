//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        
        unordered_map<int,int>mp;
        long long sum=0;
        int maxi=0;
        for(int i=0;i<A.size();++i)
        {
            
            sum+=A[i];
            
            if(sum==0)
            {
                maxi=i+1;
            }
            
            if(!mp.empty() && mp.find(sum)!= mp.end())
            {
                int len=i-mp[sum];
                maxi=max(len,maxi);
            }
            if(mp.find(sum)==mp.end())
            {
                mp.insert({sum,i});
            }
            
        }
        return maxi;
        
        
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends