//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int NthRoot(int n, int m)
	{
	    // Code here.
	    if(m==1) return 1;
	    
	    if(n==1)return m;
	    
	    int left=1,right=m;
	    
	    
	    
	    while(left<=right)
	    {
	        int mid=left+(right-left)/2;
	        
	        if(pow(mid,n)==m)return mid;
	        
	        if(pow(mid,n)>m)
	        {
	            right=mid-1;
	            
	        }else left=mid+1;
	    }
	    return -1;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends