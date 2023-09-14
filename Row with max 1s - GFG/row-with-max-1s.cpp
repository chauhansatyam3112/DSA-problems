//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
int lowerbound(vector<int>&v,int val)
{
    int low=0,high=v.size()-1;
int ans=v.size();
    
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        
        if(v[mid]>=val)
        {
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    
	    int maxi=0;
	    int ans=-1;
	    
	    for(int i=0;i<n;i++)
	    {
	        
	        
	            int idx=lowerbound(arr[i],1);
	            
	            int val=m-idx;
	            
	            if(val>maxi)
	            {
	                maxi=val;
	                ans=i;
	            }
	        
	    }
	    return ans;
	    
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends